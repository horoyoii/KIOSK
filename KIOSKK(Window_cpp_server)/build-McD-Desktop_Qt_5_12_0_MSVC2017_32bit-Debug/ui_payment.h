/********************************************************************************
** Form generated from reading UI file 'payment.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAYMENT_H
#define UI_PAYMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Payment
{
public:
    QPushButton *pushButton;

    void setupUi(QWidget *Payment)
    {
        if (Payment->objectName().isEmpty())
            Payment->setObjectName(QString::fromUtf8("Payment"));
        Payment->resize(400, 300);
        pushButton = new QPushButton(Payment);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(180, 190, 121, 51));

        retranslateUi(Payment);

        QMetaObject::connectSlotsByName(Payment);
    } // setupUi

    void retranslateUi(QWidget *Payment)
    {
        Payment->setWindowTitle(QApplication::translate("Payment", "Form", nullptr));
        pushButton->setText(QApplication::translate("Payment", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Payment: public Ui_Payment {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAYMENT_H
