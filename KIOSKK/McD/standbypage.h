#ifndef STANDBYPAGE_H
#define STANDBYPAGE_H

#include <QWidget>

namespace Ui {
class StandByPage;
}

class StandByPage : public QWidget
{
    Q_OBJECT

public:
    explicit StandByPage(QWidget *parent = nullptr);
    ~StandByPage();

    void mousePressEvent(QMouseEvent *ev);

private:
    Ui::StandByPage *ui;
};

#endif // STANDBYPAGE_H
