/********************************************************************************
** Form generated from reading UI file 'testmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTMAINWINDOW_H
#define UI_TESTMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_testMainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *testMainWindow)
    {
        if (testMainWindow->objectName().isEmpty())
            testMainWindow->setObjectName(QString::fromUtf8("testMainWindow"));
        testMainWindow->resize(800, 600);
        centralwidget = new QWidget(testMainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(190, 150, 93, 28));
        testMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(testMainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        testMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(testMainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        testMainWindow->setStatusBar(statusbar);

        retranslateUi(testMainWindow);

        QMetaObject::connectSlotsByName(testMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *testMainWindow)
    {
        testMainWindow->setWindowTitle(QApplication::translate("testMainWindow", "MainWindow", nullptr));
        pushButton->setText(QApplication::translate("testMainWindow", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class testMainWindow: public Ui_testMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTMAINWINDOW_H
