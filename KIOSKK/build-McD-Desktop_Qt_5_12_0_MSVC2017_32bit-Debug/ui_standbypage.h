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
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StandByPage
{
public:
    QLabel *backImage;
    QLabel *hello;
    QLabel *welcome;

    void setupUi(QWidget *StandByPage)
    {
        if (StandByPage->objectName().isEmpty())
            StandByPage->setObjectName(QString::fromUtf8("StandByPage"));
        StandByPage->resize(400, 300);
        backImage = new QLabel(StandByPage);
        backImage->setObjectName(QString::fromUtf8("backImage"));
        backImage->setGeometry(QRect(0, 0, 381, 281));
        backImage->setScaledContents(true);
        hello = new QLabel(StandByPage);
        hello->setObjectName(QString::fromUtf8("hello"));
        hello->setGeometry(QRect(100, 50, 181, 51));
        welcome = new QLabel(StandByPage);
        welcome->setObjectName(QString::fromUtf8("welcome"));
        welcome->setGeometry(QRect(90, 10, 181, 31));

        retranslateUi(StandByPage);

        QMetaObject::connectSlotsByName(StandByPage);
    } // setupUi

    void retranslateUi(QWidget *StandByPage)
    {
        StandByPage->setWindowTitle(QApplication::translate("StandByPage", "Form", nullptr));
        backImage->setText(QApplication::translate("StandByPage", "Hello", nullptr));
        hello->setText(QApplication::translate("StandByPage", "Hello", nullptr));
        welcome->setText(QApplication::translate("StandByPage", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StandByPage: public Ui_StandByPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STANDBYPAGE_H
