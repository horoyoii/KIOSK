#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMouseEvent>
#include <basket.h>
#include <mydatabase.h>
#include<QObject>
#include"item.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

private:
    Ui::MainWindow *ui;
    Basket *basket;
    MyDatabase *items;

public:
    explicit MainWindow(QWidget *parent = nullptr);
    void mousePressEvent(QMouseEvent *ev);
    void setSwipeView();
    void setTabIcon();
    void setLayoutSize();
    void UpdateItemListIntoWidget();
    ~MainWindow();
    Q_INVOKABLE void ShowBurgerInfoDetails(QString name);


private slots:
    void UpdateBasket(QString arg);
};

#endif // MAINWINDOW_H
