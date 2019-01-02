#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMouseEvent>
#include <basket.h>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

private:
    Ui::MainWindow *ui;
    Basket *basket;

public:
    explicit MainWindow(QWidget *parent = nullptr);
    void mousePressEvent(QMouseEvent *ev);

    ~MainWindow();


private slots:




};

#endif // MAINWINDOW_H
