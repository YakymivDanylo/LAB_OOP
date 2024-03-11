#ifndef LAB2_OOP_ORDER_H
#define LAB2_OOP_ORDER_H
#include <iostream>
#include <iostream>
#include "Basket.h"

using namespace std;
class Order{

    string addressDelivery;
    double priceGoods;
    double priceDeliver;
    string currency;
    string currency_del;
    Basket basket1;



public:
    Order();
    Order(string addressDelivery);

    Order(string addressDelivery,double priceGoods);

    Order(string addressDelivery,double priceGoods,string currency);

    Order(string addressDelivery,double priceGoods,string currency,double priceDeliver);

    Order(string addressDelivery,double priceGoods,string currency,double priceDeliver,string currency_del,Basket basket1) ;

    Order(const Order &other);

    friend ostream &operator <<(ostream &os,const Order &obj);

    Order operator=(const Order &rhs);

    ~Order()
    {
        cout<<"Distruktor is here"<<endl;
    }
};
#endif
