#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMouseEvent>
#include <basket.h>
#include <mydatabase.h>
#include<QObject>
#include"item.h"
#include<globalhelper.h>
#include"payment.h"
#include"standbypage.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

private:
    bool InitFlag;
    Ui::MainWindow *ui;
    Basket *basket;
    MyDatabase *items;
    StandByPage* stp;
    Payment *py;
public:
    Payment* getPaymentInstance() const;
    explicit MainWindow(QWidget *parent = nullptr);
    void mousePressEvent(QMouseEvent *ev);
    void setSwipeView();
    void setTabIcon();
    void setLayoutSize();
    void UpdateItemListIntoWidget();
    ~MainWindow();
    Q_INVOKABLE void ShowBurgerInfoDetails(QString name);

signals:
    void signal_UpdateTotalCost(void);

private slots:
    void UpdateBasket(QString arg);
    void UpdateTotalCost(void);
    void on_btn_order_clicked();
    void on_btn_cancel_clicked();
};

#endif // MAINWINDOW_H
