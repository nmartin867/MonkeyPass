/********************************************************************************
** Form generated from reading UI file 'generatedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GENERATEDIALOG_H
#define UI_GENERATEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_GenerateDialog
{
public:
    QLineEdit *passwordPreview;
    QPushButton *acceptButton;
    QPushButton *cancelButton;
    QPushButton *generateButton;

    void setupUi(QDialog *GenerateDialog)
    {
        if (GenerateDialog->objectName().isEmpty())
            GenerateDialog->setObjectName(QStringLiteral("GenerateDialog"));
        GenerateDialog->resize(400, 300);
        passwordPreview = new QLineEdit(GenerateDialog);
        passwordPreview->setObjectName(QStringLiteral("passwordPreview"));
        passwordPreview->setGeometry(QRect(140, 60, 113, 26));
        acceptButton = new QPushButton(GenerateDialog);
        acceptButton->setObjectName(QStringLiteral("acceptButton"));
        acceptButton->setGeometry(QRect(290, 170, 92, 26));
        cancelButton = new QPushButton(GenerateDialog);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setGeometry(QRect(170, 170, 92, 26));
        generateButton = new QPushButton(GenerateDialog);
        generateButton->setObjectName(QStringLiteral("generateButton"));
        generateButton->setGeometry(QRect(30, 170, 92, 26));

        retranslateUi(GenerateDialog);

        QMetaObject::connectSlotsByName(GenerateDialog);
    } // setupUi

    void retranslateUi(QDialog *GenerateDialog)
    {
        GenerateDialog->setWindowTitle(QApplication::translate("GenerateDialog", "Dialog", nullptr));
        acceptButton->setText(QApplication::translate("GenerateDialog", "OK", nullptr));
        cancelButton->setText(QApplication::translate("GenerateDialog", "Cancel", nullptr));
        generateButton->setText(QApplication::translate("GenerateDialog", "Generate", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GenerateDialog: public Ui_GenerateDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GENERATEDIALOG_H
