#include "Order.h"
#include "iostream"
Order::Order()
    : Order("unknown",0,"unknown",0,"unknown",Basket("none")){}

Order::Order(string adressDelivery)
    :addressDelivery(adressDelivery){}

Order::Order(string addressDelivery, double priceGoods)
: addressDelivery(addressDelivery),priceDeliver(priceGoods){}

Order::Order(string addressDelivery,double priceGoods,string currency)
: addressDelivery(addressDelivery), priceGoods(priceGoods), currency(currency){}

Order::Order(string addressDelivery,double priceGoods,string currency,double priceDeliver)
    :  addressDelivery(addressDelivery), priceGoods(priceGoods), currency(currency),priceDeliver(priceDeliver){}

Order::Order(string addressDelivery,double priceGoods,string currency,double priceDeliver,string currency_del,Basket basket1)
: addressDelivery(addressDelivery), priceGoods(priceGoods), currency(currency),priceDeliver(priceDeliver), currency_del(currency_del),basket1(basket1){}

Order::Order(const Order &other)
{
    addressDelivery=other.addressDelivery;
    priceGoods=other.priceGoods;
    currency=other.currency;
    priceDeliver=other.priceDeliver;
    currency_del=other.currency_del;
    basket1=other.basket1;
}


Order Order::operator=(const Order &rhs) {
    if(this==&rhs)
        return *this;
    else{
        addressDelivery=rhs.addressDelivery;
        priceGoods=rhs.priceGoods;
        currency=rhs.currency;
        priceDeliver=rhs.priceDeliver;
        currency_del=rhs.currency_del;
        basket1=rhs.basket1;
        return *this;
    }
}
ostream &operator<<(ostream &os, const Order &obj){
    os<<" Address of delivery: "<<obj.addressDelivery<<"; Price of goods: "<<obj.priceGoods<<"; Currency: "<<obj.currency<<"; Price of delivery: "<<obj.priceDeliver<<"; Currency of delivery: "<<obj.currency_del<<"; Basket: "<<obj.basket1;
    return os;
}

