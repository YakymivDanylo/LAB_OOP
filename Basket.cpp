#include "Basket.h"
#include <iostream>

Basket::Basket()
    :Basket("unknown",0){}

    Basket:: Basket(string status)
    :status(status){}

Basket::Basket(string status,double price)
    :status{status},price{price}{}

ostream &operator<<(ostream &os, const Basket &obj){
    os<<" Status: "<<obj.status<<" Price: "<<obj.price;
    return os;
}
Basket::~Basket() {}