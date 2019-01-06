/********************************************************************************
** Form generated from reading UI file 'testwid.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTWID_H
#define UI_TESTWID_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_testWid
{
public:
    QPushButton *pushButton;

    void setupUi(QWidget *testWid)
    {
        if (testWid->objectName().isEmpty())
            testWid->setObjectName(QString::fromUtf8("testWid"));
        testWid->resize(450, 64);
        pushButton = new QPushButton(testWid);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(310, 20, 131, 31));

        retranslateUi(testWid);

        QMetaObject::connectSlotsByName(testWid);
    } // setupUi

    void retranslateUi(QWidget *testWid)
    {
        testWid->setWindowTitle(QApplication::translate("testWid", "Form", nullptr));
        pushButton->setText(QApplication::translate("testWid", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class testWid: public Ui_testWid {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTWID_H
