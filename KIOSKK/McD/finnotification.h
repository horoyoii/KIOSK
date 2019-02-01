#ifndef FINNOTIFICATION_H
#define FINNOTIFICATION_H

#include <QWidget>

namespace Ui {
class FinNotification;
}

class FinNotification : public QWidget
{
    Q_OBJECT

public:
    explicit FinNotification(QWidget *parent = nullptr);
    ~FinNotification();

private:
    Ui::FinNotification *ui;
};

#endif // FINNOTIFICATION_H
