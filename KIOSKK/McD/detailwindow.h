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
    explicit DetailWindow(QWidget *parent = nullptr, QString name = nullptr, MyDatabase *items = nullptr);
    ~DetailWindow();

private slots:
    void on_Cancel_clicked(void);

    void on_btn_larger_clicked();

    void on_btn_normal_clicked();

    void on_btn_single_clicked();


private:
    Ui::DetailWindow *ui;
    void SetWindowSize();
    void SetIconImage();
    void SetBurgerName(QString name);
    void SetBurgerPrice(QString name, MyDatabase *items);
    void SetMainImage(QString name);

signals:
    void SignalToMainClass(const Item &arg);
};

#endif // DETAILWINDOW_H
