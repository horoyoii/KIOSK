#ifndef DETAILWINDOW_H
#define DETAILWINDOW_H

#include <QWidget>
#include"mydatabase.h"
#include"globalhelper.h"
#include<QString>
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
    void on_Cancel_clicked();

private:
    Ui::DetailWindow *ui;
    void SetWindowSize();
    void SetIconImage();
    void SetBurgerName(QString name);
    void SetBurgerPrice(QString name, MyDatabase *items);
    void SetMainImage(QString name);
};

#endif // DETAILWINDOW_H
