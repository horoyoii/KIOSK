#ifndef BASKET_H
#define BASKET_H
#include<map>
#include<QString>
#include"item.h"

using namespace std;

class Basket{
private:
    int totalSum;
    vector<Item> List;

public:
    explicit Basket();
    int getTotalSum() const;
    vector<Item> getList() const;
    void AddItem(Item item);

};






#endif // BASKET_H
