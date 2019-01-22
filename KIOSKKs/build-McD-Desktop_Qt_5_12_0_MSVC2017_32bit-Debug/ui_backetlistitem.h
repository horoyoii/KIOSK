/********************************************************************************
** Form generated from reading UI file 'backetlistitem.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BACKETLISTITEM_H
#define UI_BACKETLISTITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BacketListItem
{
public:
    QLabel *name;
    QLabel *price;
    QPushButton *cacel;

    void setupUi(QWidget *BacketListItem)
    {
        if (BacketListItem->objectName().isEmpty())
            BacketListItem->setObjectName(QString::fromUtf8("BacketListItem"));
        BacketListItem->resize(606, 51);
        name = new QLabel(BacketListItem);
        name->setObjectName(QString::fromUtf8("name"));
        name->setGeometry(QRect(10, 20, 221, 31));
        price = new QLabel(BacketListItem);
        price->setObjectName(QString::fromUtf8("price"));
        price->setGeometry(QRect(220, 10, 131, 31));
        cacel = new QPushButton(BacketListItem);
        cacel->setObjectName(QString::fromUtf8("cacel"));
        cacel->setGeometry(QRect(420, 0, 121, 40));

        retranslateUi(BacketListItem);

        QMetaObject::connectSlotsByName(BacketListItem);
    } // setupUi

    void retranslateUi(QWidget *BacketListItem)
    {
        BacketListItem->setWindowTitle(QApplication::translate("BacketListItem", "Form", nullptr));
        name->setText(QApplication::translate("BacketListItem", "Name", nullptr));
        price->setText(QApplication::translate("BacketListItem", "Price", nullptr));
        cacel->setText(QApplication::translate("BacketListItem", "\354\267\250\354\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BacketListItem: public Ui_BacketListItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BACKETLISTITEM_H
