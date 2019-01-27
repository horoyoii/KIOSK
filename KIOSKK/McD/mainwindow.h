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
#include<mydebug.h>
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
    void InitAllState(); // 한번의 과정 수행 후 키오스크 전체 초기화
    ~MainWindow();
    Q_INVOKABLE void ShowBurgerInfoDetails(QString name);

signals:
    void signal_UpdateTotalCost(void);

private slots:
    void UpdateBasket(QString arg);
    void UpdateTotalCost(void);
    void on_btn_order_clicked();
    void on_btn_cancel_clicked();
    void FinTheTotalTask(bool opt); // 결제 완료 후 키오스크 초기화 및 데이터 서버에 결제 내역 전송
    void openTheMainPage(); // 앱에서 요청이 들어오면 키오스크를 실행시킨다.
    void on_btn_order_pressed();
    void on_btn_order_released();
};

#endif // MAINWINDOW_H
