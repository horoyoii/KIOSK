/********************************************************************************
** Form generated from reading UI file 'detailwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DETAILWINDOW_H
#define UI_DETAILWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DetailWindow
{
public:
    QGroupBox *groupBox;
    QPushButton *Cancel;
    QLabel *image;
    QLabel *bg_name;
    QGroupBox *groupBox_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton;
    QGroupBox *groupBox_3;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *pushButton_2;
    QGroupBox *groupBox_4;
    QLabel *label_7;
    QLabel *label_8;
    QPushButton *pushButton_3;

    void setupUi(QWidget *DetailWindow)
    {
        if (DetailWindow->objectName().isEmpty())
            DetailWindow->setObjectName(QString::fromUtf8("DetailWindow"));
        DetailWindow->resize(600, 700);
        groupBox = new QGroupBox(DetailWindow);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 581, 681));
        groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        Cancel = new QPushButton(groupBox);
        Cancel->setObjectName(QString::fromUtf8("Cancel"));
        Cancel->setGeometry(QRect(400, 620, 171, 51));
        image = new QLabel(groupBox);
        image->setObjectName(QString::fromUtf8("image"));
        image->setGeometry(QRect(80, 60, 301, 251));
        bg_name = new QLabel(groupBox);
        bg_name->setObjectName(QString::fromUtf8("bg_name"));
        bg_name->setGeometry(QRect(30, 10, 411, 31));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 360, 561, 71));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 25, 241, 31));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(290, 20, 121, 31));
        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(440, 17, 111, 41));
        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 440, 561, 71));
        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 25, 241, 31));
        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(290, 20, 121, 31));
        pushButton_2 = new QPushButton(groupBox_3);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(440, 17, 111, 41));
        groupBox_4 = new QGroupBox(groupBox);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 520, 561, 71));
        label_7 = new QLabel(groupBox_4);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 25, 241, 31));
        label_8 = new QLabel(groupBox_4);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(290, 20, 121, 31));
        pushButton_3 = new QPushButton(groupBox_4);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(440, 17, 111, 41));

        retranslateUi(DetailWindow);

        QMetaObject::connectSlotsByName(DetailWindow);
    } // setupUi

    void retranslateUi(QWidget *DetailWindow)
    {
        DetailWindow->setWindowTitle(QApplication::translate("DetailWindow", "Form", nullptr));
        groupBox->setTitle(QString());
        Cancel->setText(QApplication::translate("DetailWindow", "\354\267\250\354\206\214", nullptr));
        image->setText(QApplication::translate("DetailWindow", "Burger Image", nullptr));
        bg_name->setText(QApplication::translate("DetailWindow", "Burger name", nullptr));
        groupBox_2->setTitle(QString());
        label_3->setText(QApplication::translate("DetailWindow", "kind", nullptr));
        label_4->setText(QApplication::translate("DetailWindow", "price", nullptr));
        pushButton->setText(QApplication::translate("DetailWindow", "\354\204\240\355\203\235", nullptr));
        groupBox_3->setTitle(QString());
        label_5->setText(QApplication::translate("DetailWindow", "kind", nullptr));
        label_6->setText(QApplication::translate("DetailWindow", "price", nullptr));
        pushButton_2->setText(QApplication::translate("DetailWindow", "\354\204\240\355\203\235", nullptr));
        groupBox_4->setTitle(QString());
        label_7->setText(QApplication::translate("DetailWindow", "kind", nullptr));
        label_8->setText(QApplication::translate("DetailWindow", "price", nullptr));
        pushButton_3->setText(QApplication::translate("DetailWindow", "\354\204\240\355\203\235", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DetailWindow: public Ui_DetailWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DETAILWINDOW_H
