/********************************************************************************
** Form generated from reading UI file 'monkeypass.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MONKEYPASS_H
#define UI_MONKEYPASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
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
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MonkeyPass)
    {
        if (MonkeyPass->objectName().isEmpty())
            MonkeyPass->setObjectName(QStringLiteral("MonkeyPass"));
        MonkeyPass->resize(1276, 802);
        centralWidget = new QWidget(MonkeyPass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        login_page = new QWidget();
        login_page->setObjectName(QStringLiteral("login_page"));
        verticalLayout = new QVBoxLayout(login_page);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        masterPassword = new QLineEdit(login_page);
        masterPassword->setObjectName(QStringLiteral("masterPassword"));

        verticalLayout->addWidget(masterPassword);

        stackedWidget->addWidget(login_page);
        create_page = new QWidget();
        create_page->setObjectName(QStringLiteral("create_page"));
        newPassword = new QLineEdit(create_page);
        newPassword->setObjectName(QStringLiteral("newPassword"));
        newPassword->setGeometry(QRect(9, 106, 142, 50));
        newPassword->setMinimumSize(QSize(0, 50));
        passwordConfirm = new QLineEdit(create_page);
        passwordConfirm->setObjectName(QStringLiteral("passwordConfirm"));
        passwordConfirm->setGeometry(QRect(9, 259, 142, 50));
        passwordConfirm->setMinimumSize(QSize(0, 50));
        createButton = new QPushButton(create_page);
        createButton->setObjectName(QStringLiteral("createButton"));
        createButton->setGeometry(QRect(9, 412, 80, 50));
        createButton->setMinimumSize(QSize(0, 50));
        createButton->setMaximumSize(QSize(200, 16777215));
        generateButton = new QPushButton(create_page);
        generateButton->setObjectName(QStringLiteral("generateButton"));
        generateButton->setGeometry(QRect(9, 565, 80, 50));
        generateButton->setMinimumSize(QSize(0, 50));
        generateButton->setMaximumSize(QSize(200, 16777215));
        stackedWidget->addWidget(create_page);

        horizontalLayout->addWidget(stackedWidget);

        MonkeyPass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MonkeyPass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1276, 23));
        MonkeyPass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MonkeyPass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MonkeyPass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MonkeyPass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MonkeyPass->setStatusBar(statusBar);

        retranslateUi(MonkeyPass);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MonkeyPass);
    } // setupUi

    void retranslateUi(QMainWindow *MonkeyPass)
    {
        MonkeyPass->setWindowTitle(QApplication::translate("MonkeyPass", "MonkeyPass", nullptr));
        createButton->setText(QApplication::translate("MonkeyPass", "Ok", nullptr));
        generateButton->setText(QApplication::translate("MonkeyPass", "Generate", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MonkeyPass: public Ui_MonkeyPass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MONKEYPASS_H
