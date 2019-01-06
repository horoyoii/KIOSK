/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "QtQuickWidgets/QQuickWidget"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout;
    QQuickWidget *quickWidget;
    QWidget *tab_2;
    QGridLayout *gridLayout_2;
    QQuickWidget *quickWidget_2;
    QWidget *tab_3;
    QWidget *tab_4;
    QListView *listView;
    QWidget *layoutWidget;
    QHBoxLayout *OrderButton;
    QPushButton *btn_cancel;
    QPushButton *btn_order;
    QLabel *basketLabel;
    QLabel *banner;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1058, 1026);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(40, 130, 901, 521));
        tabWidget->setTabPosition(QTabWidget::West);
        tabWidget->setIconSize(QSize(100, 100));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout = new QGridLayout(tab);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        quickWidget = new QQuickWidget(tab);
        quickWidget->setObjectName(QString::fromUtf8("quickWidget"));
        quickWidget->setResizeMode(QQuickWidget::SizeRootObjectToView);

        gridLayout->addWidget(quickWidget, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_2 = new QGridLayout(tab_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        quickWidget_2 = new QQuickWidget(tab_2);
        quickWidget_2->setObjectName(QString::fromUtf8("quickWidget_2"));
        quickWidget_2->setResizeMode(QQuickWidget::SizeRootObjectToView);

        gridLayout_2->addWidget(quickWidget_2, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        tabWidget->addTab(tab_4, QString());
        listView = new QListView(centralWidget);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(0, 780, 891, 131));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(200, 930, 731, 30));
        OrderButton = new QHBoxLayout(layoutWidget);
        OrderButton->setSpacing(6);
        OrderButton->setContentsMargins(11, 11, 11, 11);
        OrderButton->setObjectName(QString::fromUtf8("OrderButton"));
        OrderButton->setSizeConstraint(QLayout::SetNoConstraint);
        OrderButton->setContentsMargins(0, 0, 0, 0);
        btn_cancel = new QPushButton(layoutWidget);
        btn_cancel->setObjectName(QString::fromUtf8("btn_cancel"));

        OrderButton->addWidget(btn_cancel);

        btn_order = new QPushButton(layoutWidget);
        btn_order->setObjectName(QString::fromUtf8("btn_order"));

        OrderButton->addWidget(btn_order);

        basketLabel = new QLabel(centralWidget);
        basketLabel->setObjectName(QString::fromUtf8("basketLabel"));
        basketLabel->setGeometry(QRect(0, 740, 1061, 16));
        basketLabel->setScaledContents(false);
        banner = new QLabel(centralWidget);
        banner->setObjectName(QString::fromUtf8("banner"));
        banner->setGeometry(QRect(0, 0, 1061, 121));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(banner->sizePolicy().hasHeightForWidth());
        banner->setSizePolicy(sizePolicy);
        banner->setScaledContents(true);
        banner->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 810, 211, 31));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1058, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QString());
        btn_cancel->setText(QApplication::translate("MainWindow", "\354\243\274\353\254\270\354\267\250\354\206\214", nullptr));
        btn_order->setText(QApplication::translate("MainWindow", "\354\243\274\353\254\270\355\225\230\352\270\260", nullptr));
        basketLabel->setText(QApplication::translate("MainWindow", "\354\236\245\353\260\224\352\265\254\353\213\210", nullptr));
        banner->setText(QString());
        label->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
