/********************************************************************************
** Form generated from reading UI file 'app.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APP_H
#define UI_APP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_app
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *restore_existing_wallet;
    QLabel *debuggerLabel;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *app)
    {
        if (app->objectName().isEmpty())
            app->setObjectName(QStringLiteral("app"));
        app->resize(400, 300);
        centralWidget = new QWidget(app);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 50, 291, 111));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        restore_existing_wallet = new QPushButton(layoutWidget);
        restore_existing_wallet->setObjectName(QStringLiteral("restore_existing_wallet"));

        verticalLayout->addWidget(restore_existing_wallet);

        debuggerLabel = new QLabel(centralWidget);
        debuggerLabel->setObjectName(QStringLiteral("debuggerLabel"));
        debuggerLabel->setGeometry(QRect(160, 180, 60, 16));
        app->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(app);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 22));
        app->setMenuBar(menuBar);
        mainToolBar = new QToolBar(app);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        app->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(app);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        app->setStatusBar(statusBar);

        retranslateUi(app);

        QMetaObject::connectSlotsByName(app);
    } // setupUi

    void retranslateUi(QMainWindow *app)
    {
        app->setWindowTitle(QApplication::translate("app", "app", nullptr));
        pushButton->setText(QApplication::translate("app", "Create New Wallet", nullptr));
        restore_existing_wallet->setText(QApplication::translate("app", "Restore Existing Wallet", nullptr));
        debuggerLabel->setText(QApplication::translate("app", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class app: public Ui_app {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APP_H