#include "monkeypass.h"
#include "ui_monkeypass.h"
#include "configuration.h"
#include "generatedialog.h"
#include "monkeyentry.h"
#include <QtDebug>
#include <QLineEdit>
#include <QFileDialog>
#include <QJsonParseError>
#include <QJsonObject>
#include <QJsonArray>
#include <QDebug>
#include <QStandardPaths>



MonkeyPass::MonkeyPass(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MonkeyPass)
{
    ui->setupUi(this);

    m_mktsettings = new MKTSettings(Configuration::settingsFilePath + "/" + Configuration::settingFileName);


    if(m_mktsettings->exists(Configuration::settings_password_key)) {
        initLoginForm();
    } else {
        ui->stackedWidget->setCurrentIndex(1);
        initCreateForm();
    }

    createMenuActions();
    createMenuItems();
}

void MonkeyPass::initLoginForm() {
    ui->masterPassword->setMinimumHeight(Configuration::lineEditMinHeight);
    ui->masterPassword->setEchoMode(QLineEdit::Password);
    connect(ui->masterPassword, &QLineEdit::textChanged, this, &MonkeyPass::onMasterPasswordChange);
}

void MonkeyPass::initCreateForm() {
    ui->newPassword->setMinimumHeight(Configuration::lineEditMinHeight);
    ui->newPassword->setEchoMode(QLineEdit::Password);
    connect(ui->newPassword, &QLineEdit::textChanged, this, &MonkeyPass::onNewPasswordChange);

    ui->passwordConfirm->setMinimumHeight(Configuration::lineEditMinHeight);
    ui->passwordConfirm->setEchoMode(QLineEdit::Password);
    connect(ui->passwordConfirm, &QLineEdit::textChanged, this, &MonkeyPass::onPasswordConfirmChange);

    ui->createButton->setDisabled(true);
    connect(ui->createButton, &QPushButton::clicked, this, &MonkeyPass::createNewAccount);
    connect(ui->generateButton, &QPushButton::clicked, this, &MonkeyPass::showGenerateDialog);


    auto *buttonLayout = new QHBoxLayout;
    buttonLayout->setAlignment(Qt::AlignRight);
    buttonLayout->addWidget(ui->createButton);
    buttonLayout->addWidget(ui->generateButton);

    auto *mainLayout = new QVBoxLayout;
    mainLayout->addWidget(ui->newPassword);
    mainLayout->addWidget(ui->passwordConfirm);
    mainLayout->addLayout(buttonLayout);

    ui->create_page->setLayout(mainLayout);


}

void MonkeyPass::createMenuItems() {
    auto fileMenu = ui->menuBar->addMenu("&File");
    fileMenu->addAction(m_enpass_import);
}

void MonkeyPass::createMenuActions () {
    m_enpass_import = new QAction("Import Enpass JSON");
    m_enpass_import->setStatusTip("Import Enpass JSON file");
    connect(m_enpass_import, &QAction::triggered, this, &MonkeyPass::on_actionImport_Enpass_File_triggered);
}

void MonkeyPass::onMasterPasswordChange() {
    m_masterPassword = ui->masterPassword->text();
    qDebug() << m_masterPassword << "\n";
}

void MonkeyPass::onNewPasswordChange() {
    m_newPassword = ui->newPassword->text();
    validateForm();
    qDebug() << m_newPassword << "\n";

}

void MonkeyPass::onPasswordConfirmChange() {
    m_passwordConfirm = ui->passwordConfirm->text();
    validateForm();
    qDebug() << m_newPassword << "\n";
}

void MonkeyPass::validateForm() {
    if (ui->stackedWidget->currentIndex() == 0) {
        //TODO: authenticate
        formValid = !m_masterPassword.isEmpty();

    } else {
        formValid = creationPasswordsMatch();
        ui->createButton->setDisabled(!formValid);
    }
}

bool MonkeyPass::creationPasswordsMatch() {
    return m_newPassword == m_passwordConfirm
            && !m_newPassword.isEmpty()
            && !m_passwordConfirm.isEmpty();
}

void MonkeyPass::createNewAccount() {
    qDebug() << "Creating Account\n";
}

void MonkeyPass::showGenerateDialog() {
    auto dialog = new GenerateDialog(this);
    dialog->setModal(true);
    dialog->show();
}

void MonkeyPass::on_actionImport_Enpass_File_triggered()
{
    auto enpass_json_file = QFileDialog::getOpenFileName(this, "Open", QDir::homePath(), "*.json");
    auto json_file = new QFile(enpass_json_file);
    json_file->open(QIODevice::ReadOnly|QIODevice::Text);
    auto json_data = json_file->readAll();
    json_file->close();

    QJsonParseError errorPtr;
    auto json_doc = QJsonDocument::fromJson(json_data, &errorPtr);
    if (json_doc.isNull()){
        //TODO: show error dialog
        qDebug() << "JSON parse faild\n";
        return;

    }

    auto entries = MonkeyEntry::fromEnpassJson(json_doc);
}

MonkeyPass::~MonkeyPass()
{
    delete m_mktsettings;
    delete m_mktpassword;
    delete ui;
}

