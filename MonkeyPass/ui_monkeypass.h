/********************************************************************************
** Form generated from reading UI file 'monkeypass.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MONKEYPASS_H
#define UI_MONKEYPASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MonkeyPass
{
public:
    QAction *actionImport_Enpass_File;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QStackedWidget *stackedWidget;
    QWidget *login_page;
    QVBoxLayout *verticalLayout;
    QLineEdit *masterPassword;
    QWidget *create_page;
    QLineEdit *newPassword;
    QLineEdit *passwordConfirm;
    QPushButton *createButton;
    QPushButton *generateButton;
    QMenuBar *menuBar;
    QMenu *menu_File;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MonkeyPass)
    {
        if (MonkeyPass->objectName().isEmpty())
            MonkeyPass->setObjectName(QString::fromUtf8("MonkeyPass"));
        MonkeyPass->resize(1276, 802);
        actionImport_Enpass_File = new QAction(MonkeyPass);
        actionImport_Enpass_File->setObjectName(QString::fromUtf8("actionImport_Enpass_File"));
        centralWidget = new QWidget(MonkeyPass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        login_page = new QWidget();
        login_page->setObjectName(QString::fromUtf8("login_page"));
        verticalLayout = new QVBoxLayout(login_page);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        masterPassword = new QLineEdit(login_page);
        masterPassword->setObjectName(QString::fromUtf8("masterPassword"));

        verticalLayout->addWidget(masterPassword);

        stackedWidget->addWidget(login_page);
        create_page = new QWidget();
        create_page->setObjectName(QString::fromUtf8("create_page"));
        newPassword = new QLineEdit(create_page);
        newPassword->setObjectName(QString::fromUtf8("newPassword"));
        newPassword->setGeometry(QRect(9, 106, 142, 50));
        newPassword->setMinimumSize(QSize(0, 50));
        passwordConfirm = new QLineEdit(create_page);
        passwordConfirm->setObjectName(QString::fromUtf8("passwordConfirm"));
        passwordConfirm->setGeometry(QRect(9, 259, 142, 50));
        passwordConfirm->setMinimumSize(QSize(0, 50));
        createButton = new QPushButton(create_page);
        createButton->setObjectName(QString::fromUtf8("createButton"));
        createButton->setGeometry(QRect(9, 412, 80, 50));
        createButton->setMinimumSize(QSize(0, 50));
        createButton->setMaximumSize(QSize(200, 16777215));
        generateButton = new QPushButton(create_page);
        generateButton->setObjectName(QString::fromUtf8("generateButton"));
        generateButton->setGeometry(QRect(9, 565, 80, 50));
        generateButton->setMinimumSize(QSize(0, 50));
        generateButton->setMaximumSize(QSize(200, 16777215));
        stackedWidget->addWidget(create_page);

        horizontalLayout->addWidget(stackedWidget);

        MonkeyPass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MonkeyPass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1276, 23));
        menu_File = new QMenu(menuBar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        MonkeyPass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MonkeyPass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MonkeyPass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MonkeyPass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MonkeyPass->setStatusBar(statusBar);

        menuBar->addAction(menu_File->menuAction());
        menu_File->addAction(actionImport_Enpass_File);

        retranslateUi(MonkeyPass);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MonkeyPass);
    } // setupUi

    void retranslateUi(QMainWindow *MonkeyPass)
    {
        MonkeyPass->setWindowTitle(QCoreApplication::translate("MonkeyPass", "MonkeyPass", nullptr));
        actionImport_Enpass_File->setText(QCoreApplication::translate("MonkeyPass", "Import Enpass File", nullptr));
        createButton->setText(QCoreApplication::translate("MonkeyPass", "Ok", nullptr));
        generateButton->setText(QCoreApplication::translate("MonkeyPass", "Generate", nullptr));
        menu_File->setTitle(QCoreApplication::translate("MonkeyPass", "&File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MonkeyPass: public Ui_MonkeyPass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MONKEYPASS_H
