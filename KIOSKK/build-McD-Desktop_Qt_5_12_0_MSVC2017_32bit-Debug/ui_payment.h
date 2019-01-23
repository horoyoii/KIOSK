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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Payment
{
public:
    QPushButton *push_send_otp;
    QPushButton *push_fin;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *psh_num_0;
    QPushButton *psh_num_4;
    QPushButton *psh_num_5;
    QPushButton *psh_num_8;
    QPushButton *psh_num_1;
    QPushButton *psh_num_9;
    QPushButton *psh_num_3;
    QPushButton *psh_num_del;
    QPushButton *psh_num_7;
    QPushButton *psh_num_6;
    QPushButton *psh_num_2;
    QLabel *Background_label;
    QLabel *pass_1;
    QLabel *pass_2;
    QLabel *pass_3;
    QLabel *pass_4;

    void setupUi(QWidget *Payment)
    {
        if (Payment->objectName().isEmpty())
            Payment->setObjectName(QString::fromUtf8("Payment"));
        Payment->resize(600, 700);
        push_send_otp = new QPushButton(Payment);
        push_send_otp->setObjectName(QString::fromUtf8("push_send_otp"));
        push_send_otp->setGeometry(QRect(470, 160, 121, 51));
        push_fin = new QPushButton(Payment);
        push_fin->setObjectName(QString::fromUtf8("push_fin"));
        push_fin->setGeometry(QRect(422, 627, 161, 61));
        gridLayoutWidget = new QWidget(Payment);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(90, 250, 395, 341));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        psh_num_0 = new QPushButton(gridLayoutWidget);
        psh_num_0->setObjectName(QString::fromUtf8("psh_num_0"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(21);
        sizePolicy.setHeightForWidth(psh_num_0->sizePolicy().hasHeightForWidth());
        psh_num_0->setSizePolicy(sizePolicy);

        gridLayout->addWidget(psh_num_0, 4, 3, 1, 1);

        psh_num_4 = new QPushButton(gridLayoutWidget);
        psh_num_4->setObjectName(QString::fromUtf8("psh_num_4"));
        sizePolicy.setHeightForWidth(psh_num_4->sizePolicy().hasHeightForWidth());
        psh_num_4->setSizePolicy(sizePolicy);

        gridLayout->addWidget(psh_num_4, 2, 2, 1, 1);

        psh_num_5 = new QPushButton(gridLayoutWidget);
        psh_num_5->setObjectName(QString::fromUtf8("psh_num_5"));
        sizePolicy.setHeightForWidth(psh_num_5->sizePolicy().hasHeightForWidth());
        psh_num_5->setSizePolicy(sizePolicy);

        gridLayout->addWidget(psh_num_5, 2, 3, 1, 1);

        psh_num_8 = new QPushButton(gridLayoutWidget);
        psh_num_8->setObjectName(QString::fromUtf8("psh_num_8"));
        sizePolicy.setHeightForWidth(psh_num_8->sizePolicy().hasHeightForWidth());
        psh_num_8->setSizePolicy(sizePolicy);

        gridLayout->addWidget(psh_num_8, 3, 3, 1, 1);

        psh_num_1 = new QPushButton(gridLayoutWidget);
        psh_num_1->setObjectName(QString::fromUtf8("psh_num_1"));
        sizePolicy.setHeightForWidth(psh_num_1->sizePolicy().hasHeightForWidth());
        psh_num_1->setSizePolicy(sizePolicy);

        gridLayout->addWidget(psh_num_1, 1, 2, 1, 1);

        psh_num_9 = new QPushButton(gridLayoutWidget);
        psh_num_9->setObjectName(QString::fromUtf8("psh_num_9"));
        sizePolicy.setHeightForWidth(psh_num_9->sizePolicy().hasHeightForWidth());
        psh_num_9->setSizePolicy(sizePolicy);

        gridLayout->addWidget(psh_num_9, 3, 4, 1, 1);

        psh_num_3 = new QPushButton(gridLayoutWidget);
        psh_num_3->setObjectName(QString::fromUtf8("psh_num_3"));
        sizePolicy.setHeightForWidth(psh_num_3->sizePolicy().hasHeightForWidth());
        psh_num_3->setSizePolicy(sizePolicy);

        gridLayout->addWidget(psh_num_3, 1, 4, 1, 1);

        psh_num_del = new QPushButton(gridLayoutWidget);
        psh_num_del->setObjectName(QString::fromUtf8("psh_num_del"));
        sizePolicy.setHeightForWidth(psh_num_del->sizePolicy().hasHeightForWidth());
        psh_num_del->setSizePolicy(sizePolicy);

        gridLayout->addWidget(psh_num_del, 4, 4, 1, 1);

        psh_num_7 = new QPushButton(gridLayoutWidget);
        psh_num_7->setObjectName(QString::fromUtf8("psh_num_7"));
        sizePolicy.setHeightForWidth(psh_num_7->sizePolicy().hasHeightForWidth());
        psh_num_7->setSizePolicy(sizePolicy);

        gridLayout->addWidget(psh_num_7, 3, 2, 1, 1);

        psh_num_6 = new QPushButton(gridLayoutWidget);
        psh_num_6->setObjectName(QString::fromUtf8("psh_num_6"));
        sizePolicy.setHeightForWidth(psh_num_6->sizePolicy().hasHeightForWidth());
        psh_num_6->setSizePolicy(sizePolicy);

        gridLayout->addWidget(psh_num_6, 2, 4, 1, 1);

        psh_num_2 = new QPushButton(gridLayoutWidget);
        psh_num_2->setObjectName(QString::fromUtf8("psh_num_2"));
        sizePolicy.setHeightForWidth(psh_num_2->sizePolicy().hasHeightForWidth());
        psh_num_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(psh_num_2, 1, 3, 1, 1);

        Background_label = new QLabel(Payment);
        Background_label->setObjectName(QString::fromUtf8("Background_label"));
        Background_label->setGeometry(QRect(0, 0, 601, 241));
        pass_1 = new QLabel(Payment);
        pass_1->setObjectName(QString::fromUtf8("pass_1"));
        pass_1->setGeometry(QRect(90, 140, 41, 41));
        pass_2 = new QLabel(Payment);
        pass_2->setObjectName(QString::fromUtf8("pass_2"));
        pass_2->setGeometry(QRect(200, 130, 51, 41));
        pass_3 = new QLabel(Payment);
        pass_3->setObjectName(QString::fromUtf8("pass_3"));
        pass_3->setGeometry(QRect(290, 100, 41, 31));
        pass_4 = new QLabel(Payment);
        pass_4->setObjectName(QString::fromUtf8("pass_4"));
        pass_4->setGeometry(QRect(390, 120, 41, 31));
        Background_label->raise();
        push_send_otp->raise();
        push_fin->raise();
        gridLayoutWidget->raise();
        pass_1->raise();
        pass_2->raise();
        pass_3->raise();
        pass_4->raise();

        retranslateUi(Payment);

        QMetaObject::connectSlotsByName(Payment);
    } // setupUi

    void retranslateUi(QWidget *Payment)
    {
        Payment->setWindowTitle(QApplication::translate("Payment", "Form", nullptr));
        push_send_otp->setText(QApplication::translate("Payment", "\353\260\234\355\226\211", nullptr));
        push_fin->setText(QApplication::translate("Payment", "\352\262\260\354\240\234\355\225\230\352\270\260", nullptr));
        psh_num_0->setText(QApplication::translate("Payment", "0", nullptr));
        psh_num_4->setText(QApplication::translate("Payment", "4", nullptr));
        psh_num_5->setText(QApplication::translate("Payment", "5", nullptr));
        psh_num_8->setText(QApplication::translate("Payment", "8", nullptr));
        psh_num_1->setText(QApplication::translate("Payment", "1", nullptr));
        psh_num_9->setText(QApplication::translate("Payment", "9", nullptr));
        psh_num_3->setText(QApplication::translate("Payment", "3", nullptr));
        psh_num_del->setText(QApplication::translate("Payment", "Del", nullptr));
        psh_num_7->setText(QApplication::translate("Payment", "7", nullptr));
        psh_num_6->setText(QApplication::translate("Payment", "6", nullptr));
        psh_num_2->setText(QApplication::translate("Payment", "2", nullptr));
        Background_label->setText(QString());
        pass_1->setText(QString());
        pass_2->setText(QString());
        pass_3->setText(QString());
        pass_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Payment: public Ui_Payment {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAYMENT_H
