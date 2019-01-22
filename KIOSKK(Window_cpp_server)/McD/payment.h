#ifndef PAYMENT_H
#define PAYMENT_H

#include <QWidget>

namespace Ui {
class Payment;
}

class Payment : public QWidget
{
    Q_OBJECT

public:
    explicit Payment(QWidget *parent = nullptr);
    ~Payment();

private:
    Ui::Payment *ui;
};

#endif // PAYMENT_H
