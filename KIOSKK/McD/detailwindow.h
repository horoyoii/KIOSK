#ifndef DETAILWINDOW_H
#define DETAILWINDOW_H

#include <QWidget>
#include"mydatabase.h"
#include"globalhelper.h"
#include<QString>
#include"item.h"
namespace Ui {
class DetailWindow;
}

class DetailWindow : public QWidget
{
    Q_OBJECT

public:
    explicit DetailWindow(QWidget *parent = nullptr, QString name = nullptr, MyDatabase *items = nullptr, int option = 0);
    ~DetailWindow();

private slots:
    void on_Cancel_clicked(void);

    void on_btn_larger_clicked(void);

    void on_btn_normal_clicked(void);

    void on_btn_single_clicked(void);


private:
    Ui::DetailWindow *ui;
    int option;
    void SetWindowSize();
    void SetIconImage();

    void SetBurgerName(QString name);
    void SetBurgerPrice(QString name, MyDatabase *items);
    void SetMainImage(QString name);

    void SetDrinkName(QString name);
    void SetDrinkPrice(QString name, MyDatabase *items);
    void SetDrinkImage(QString name);

    void SetDesertName(QString name);
    void SetDesertPrice(QString name, MyDatabase *items);
    void SetDesertImage(QString name);

    QString BasicName;
    int BasicPrice;

signals:
    void SignalToMainClass(QString arg);
};

#endif // DETAILWINDOW_H
