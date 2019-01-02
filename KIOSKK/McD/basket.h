#ifndef BASKET_H
#define BASKET_H
#include<map>
#include<string>


using namespace std;

class Basket{
private:
    int totalSum;
    map<string, int> List;

public:
    explicit Basket()
        :totalSum(0){}
    int getTotalSum() const;
    map<string, int> getList() const;

};






#endif // BASKET_H
