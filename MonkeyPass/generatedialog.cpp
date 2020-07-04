#include "generatedialog.h"
#include "ui_generatedialog.h"
#include "configuration.h"
#include <QVBoxLayout>
#include <QHBoxLayout>

GenerateDialog::GenerateDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GenerateDialog)
{
    ui->setupUi(this);
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

}

void GenerateDialog::cancel() {

}

void GenerateDialog::accept() {

}

GenerateDialog::~GenerateDialog()
{
    delete ui;
}
