#include "monkeypass.h"
#include "ui_monkeypass.h"
#include "configuration.h"
#include "generatedialog.h"
#include <QtDebug>
#include <QLineEdit>
#include <QDebug>


MonkeyPass::MonkeyPass(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MonkeyPass)
{
    ui->setupUi(this);
    passFileManger = new PassFileManager;
    if (passFileManger->keyFileExists()) {
        initLoginForm();
    } else {
        ui->stackedWidget->setCurrentIndex(1);
        initCreateForm();
    }
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

void MonkeyPass::onMasterPasswordChange() {
    masterPassword = ui->masterPassword->text();
    qDebug() << masterPassword << "\n";
}

void MonkeyPass::onNewPasswordChange() {
    newPassword = ui->newPassword->text();
    validateForm();
    qDebug() << newPassword << "\n";

}

void MonkeyPass::onPasswordConfirmChange() {
    passwordConfirm = ui->passwordConfirm->text();
    validateForm();
    qDebug() << newPassword << "\n";
}

void MonkeyPass::validateForm() {
    if (ui->stackedWidget->currentIndex() == 0) {
        //TODO: authenticate
        formValid = !masterPassword.isEmpty();

    } else {
        formValid = creationPasswordsMatch();
        ui->createButton->setDisabled(!formValid);
    }
}

bool MonkeyPass::creationPasswordsMatch() {
    return newPassword == passwordConfirm
            && !newPassword.isEmpty()
            && !passwordConfirm.isEmpty();
}

void MonkeyPass::createNewAccount() {
    qDebug() << "Creating Account\n";
}

void MonkeyPass::showGenerateDialog() {
    auto dialog = new GenerateDialog(this);
    dialog->setModal(true);
    dialog->show();
}

MonkeyPass::~MonkeyPass()
{
    delete passFileManger;
    delete ui;
}
