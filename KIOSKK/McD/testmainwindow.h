#ifndef TESTMAINWINDOW_H
#define TESTMAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class testMainWindow;
}

class testMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit testMainWindow(QWidget *parent = nullptr);
    ~testMainWindow();

private:
    Ui::testMainWindow *ui;
};

#endif // TESTMAINWINDOW_H
