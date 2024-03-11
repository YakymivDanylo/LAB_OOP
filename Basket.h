#ifndef OOP_LAB3_BASKET_H
#define OOP_LAB3_BASKET_H
#include <iostream>
using  namespace std;

class Basket {
private:
    string status;
    double price;

public:
    Basket();
    Basket(string status);
    Basket(string status,double price);
    friend ostream &operator <<(ostream &os,const Basket &obj);
    ~Basket();
};


#endif
