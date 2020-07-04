#include "generatedialog.h"
#include "ui_generatedialog.h"
#include "configuration.h"
#include "mktpassword.h"
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPushButton>

GenerateDialog::GenerateDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GenerateDialog)
{
    ui->setupUi(this);
    initUi();
}

void GenerateDialog::initUi() {
    ui->passwordPreview->setReadOnly(true);
    ui->passwordPreview->setMinimumHeight(Configuration::lineEditMinHeight);

    ui->generateButton->setMinimumWidth(Configuration::pushButtonMaxWidth);
    ui->generateButton->setMinimumHeight(Configuration::pushButtonMinHeight);


    ui->cancelButton->setMinimumWidth(Configuration::pushButtonMaxWidth);
    ui->cancelButton->setMinimumHeight(Configuration::pushButtonMinHeight);

    ui->acceptButton->setMinimumWidth(Configuration::pushButtonMaxWidth);
    ui->acceptButton->setMinimumHeight(Configuration::pushButtonMinHeight);

    connect(ui->generateButton, &QPushButton::pressed, this, &GenerateDialog::generatePassword);

    auto buttonLayout = new QHBoxLayout();
    buttonLayout->addWidget(ui->generateButton);
    buttonLayout->addWidget(ui->cancelButton);
    buttonLayout->addWidget(ui->acceptButton);


    auto mainLayout = new QVBoxLayout();
    mainLayout->addWidget(ui->passwordPreview);
    mainLayout->addLayout(buttonLayout);
    this->setLayout(mainLayout);
}


void GenerateDialog::generatePassword() {
    MKTPassword mktpassword;
    auto newPassword = mktpassword.generate(8);
    ui->passwordPreview->setText(newPassword);

}

void GenerateDialog::cancel() {

}

void GenerateDialog::accept() {

}

GenerateDialog::~GenerateDialog()
{
    delete ui;
}
