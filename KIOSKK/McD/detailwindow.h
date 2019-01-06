#ifndef DETAILWINDOW_H
#define DETAILWINDOW_H

#include <QWidget>

namespace Ui {
class DetailWindow;
}

class DetailWindow : public QWidget
{
    Q_OBJECT

public:
    explicit DetailWindow(QWidget *parent = nullptr, QString name = nullptr);
    ~DetailWindow();

private slots:
    void on_Cancel_clicked();

private:
    Ui::DetailWindow *ui;
    void SetWindowSize();
};

#endif // DETAILWINDOW_H
