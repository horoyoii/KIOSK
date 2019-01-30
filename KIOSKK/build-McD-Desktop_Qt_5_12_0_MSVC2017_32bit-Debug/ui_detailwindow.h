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
    QLabel *large_text;
    QLabel *Larger_price;
    QPushButton *btn_larger;
    QLabel *label_large;
    QLabel *label_4;
    QGroupBox *groupBox_3;
    QLabel *normal_text;
    QLabel *Normal_price;
    QPushButton *btn_normal;
    QLabel *label_medium;
    QLabel *label_5;
    QGroupBox *groupBox_4;
    QLabel *single_text;
    QLabel *Single_price;
    QPushButton *btn_single;
    QLabel *label_small;
    QLabel *label_6;

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
        image->setGeometry(QRect(150, 60, 261, 251));
        bg_name = new QLabel(groupBox);
        bg_name->setObjectName(QString::fromUtf8("bg_name"));
        bg_name->setGeometry(QRect(30, 10, 411, 31));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        bg_name->setFont(font);
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 360, 561, 71));
        large_text = new QLabel(groupBox_2);
        large_text->setObjectName(QString::fromUtf8("large_text"));
        large_text->setGeometry(QRect(120, 20, 241, 31));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        large_text->setFont(font1);
        Larger_price = new QLabel(groupBox_2);
        Larger_price->setObjectName(QString::fromUtf8("Larger_price"));
        Larger_price->setGeometry(QRect(350, 20, 81, 31));
        QFont font2;
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setWeight(75);
        Larger_price->setFont(font2);
        btn_larger = new QPushButton(groupBox_2);
        btn_larger->setObjectName(QString::fromUtf8("btn_larger"));
        btn_larger->setGeometry(QRect(430, 10, 120, 50));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Arial Black"));
        font3.setBold(true);
        font3.setWeight(75);
        btn_larger->setFont(font3);
        btn_larger->setIconSize(QSize(140, 70));
        label_large = new QLabel(groupBox_2);
        label_large->setObjectName(QString::fromUtf8("label_large"));
        label_large->setGeometry(QRect(10, 30, 111, 16));
        label_large->setFont(font1);
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(330, 30, 21, 16));
        label_4->setFont(font2);
        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 440, 561, 71));
        normal_text = new QLabel(groupBox_3);
        normal_text->setObjectName(QString::fromUtf8("normal_text"));
        normal_text->setGeometry(QRect(80, 20, 241, 31));
        normal_text->setFont(font1);
        Normal_price = new QLabel(groupBox_3);
        Normal_price->setObjectName(QString::fromUtf8("Normal_price"));
        Normal_price->setGeometry(QRect(350, 20, 71, 31));
        Normal_price->setFont(font2);
        btn_normal = new QPushButton(groupBox_3);
        btn_normal->setObjectName(QString::fromUtf8("btn_normal"));
        btn_normal->setGeometry(QRect(430, 10, 120, 50));
        btn_normal->setFont(font3);
        label_medium = new QLabel(groupBox_3);
        label_medium->setObjectName(QString::fromUtf8("label_medium"));
        label_medium->setGeometry(QRect(10, 30, 64, 15));
        label_medium->setFont(font1);
        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(330, 30, 21, 16));
        label_5->setFont(font2);
        groupBox_4 = new QGroupBox(groupBox);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 520, 561, 71));
        single_text = new QLabel(groupBox_4);
        single_text->setObjectName(QString::fromUtf8("single_text"));
        single_text->setGeometry(QRect(70, 20, 241, 31));
        single_text->setFont(font1);
        Single_price = new QLabel(groupBox_4);
        Single_price->setObjectName(QString::fromUtf8("Single_price"));
        Single_price->setGeometry(QRect(350, 20, 81, 31));
        Single_price->setFont(font2);
        btn_single = new QPushButton(groupBox_4);
        btn_single->setObjectName(QString::fromUtf8("btn_single"));
        btn_single->setGeometry(QRect(430, 10, 120, 50));
        btn_single->setFont(font3);
        btn_single->setIconSize(QSize(140, 70));
        label_small = new QLabel(groupBox_4);
        label_small->setObjectName(QString::fromUtf8("label_small"));
        label_small->setGeometry(QRect(10, 24, 61, 21));
        label_small->setFont(font1);
        label_6 = new QLabel(groupBox_4);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(330, 30, 20, 20));
        label_6->setFont(font2);

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
        large_text->setText(QApplication::translate("DetailWindow", "kind", nullptr));
        Larger_price->setText(QApplication::translate("DetailWindow", "price", nullptr));
        btn_larger->setText(QApplication::translate("DetailWindow", "\354\236\245\353\260\224\352\265\254\353\213\210 \353\213\264\352\270\260", nullptr));
        label_large->setText(QApplication::translate("DetailWindow", "\353\235\274\354\247\200\354\204\270\355\212\270-", nullptr));
        label_4->setText(QApplication::translate("DetailWindow", "\\", nullptr));
        groupBox_3->setTitle(QString());
        normal_text->setText(QApplication::translate("DetailWindow", "kind", nullptr));
        Normal_price->setText(QApplication::translate("DetailWindow", "price", nullptr));
        btn_normal->setText(QApplication::translate("DetailWindow", "\354\236\245\353\260\224\352\265\254\353\213\210 \353\213\264\352\270\260", nullptr));
        label_medium->setText(QApplication::translate("DetailWindow", "\354\204\270\355\212\270-", nullptr));
        label_5->setText(QApplication::translate("DetailWindow", "\\", nullptr));
        groupBox_4->setTitle(QString());
        single_text->setText(QApplication::translate("DetailWindow", "kind", nullptr));
        Single_price->setText(QApplication::translate("DetailWindow", "price", nullptr));
        btn_single->setText(QApplication::translate("DetailWindow", "\354\236\245\353\260\224\352\265\254\353\213\210 \353\213\264\352\270\260", nullptr));
        label_small->setText(QApplication::translate("DetailWindow", "\353\213\250\355\222\210-", nullptr));
        label_6->setText(QApplication::translate("DetailWindow", "\\", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DetailWindow: public Ui_DetailWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DETAILWINDOW_H
