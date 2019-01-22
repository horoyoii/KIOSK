#ifndef BACKETLISTITEM_H
#define BACKETLISTITEM_H

#include <QWidget>

namespace Ui {
class BacketListItem;
}

class BasketListItem : public QWidget
{
    Q_OBJECT

public:
    explicit BasketListItem(QWidget *parent = nullptr);
    ~BasketListItem();

private:
    Ui::BacketListItem *ui;
};

#endif // BACKETLISTITEM_H
