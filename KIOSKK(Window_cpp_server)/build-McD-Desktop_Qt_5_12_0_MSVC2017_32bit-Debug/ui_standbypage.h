/********************************************************************************
** Form generated from reading UI file 'standbypage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STANDBYPAGE_H
#define UI_STANDBYPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StandByPage
{
public:

    void setupUi(QWidget *StandByPage)
    {
        if (StandByPage->objectName().isEmpty())
            StandByPage->setObjectName(QString::fromUtf8("StandByPage"));
        StandByPage->resize(400, 300);

        retranslateUi(StandByPage);

        QMetaObject::connectSlotsByName(StandByPage);
    } // setupUi

    void retranslateUi(QWidget *StandByPage)
    {
        StandByPage->setWindowTitle(QApplication::translate("StandByPage", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StandByPage: public Ui_StandByPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STANDBYPAGE_H
