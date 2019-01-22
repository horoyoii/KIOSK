#ifndef TESTWID_H
#define TESTWID_H

#include <QWidget>

namespace Ui {
class testWid;
}

class testWid : public QWidget
{
    Q_OBJECT

public:
    explicit testWid(QWidget *parent = nullptr);
    ~testWid();

private:
    Ui::testWid *ui;
};

#endif // TESTWID_H
