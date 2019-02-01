/********************************************************************************
** Form generated from reading UI file 'finnotification.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINNOTIFICATION_H
#define UI_FINNOTIFICATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FinNotification
{
public:
    QLabel *label;

    void setupUi(QWidget *FinNotification)
    {
        if (FinNotification->objectName().isEmpty())
            FinNotification->setObjectName(QString::fromUtf8("FinNotification"));
        FinNotification->resize(400, 300);
        label = new QLabel(FinNotification);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 100, 181, 71));

        retranslateUi(FinNotification);

        QMetaObject::connectSlotsByName(FinNotification);
    } // setupUi

    void retranslateUi(QWidget *FinNotification)
    {
        FinNotification->setWindowTitle(QApplication::translate("FinNotification", "Form", nullptr));
        label->setText(QApplication::translate("FinNotification", "\352\262\260\354\240\234 \354\231\204\353\243\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FinNotification: public Ui_FinNotification {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINNOTIFICATION_H
