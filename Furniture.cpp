#include "Furniture.h"
#include <iostream>
Furniture::Furniture()
    :Furniture{"noname",0,"unknown","unknown"}{}

Furniture::Furniture(string newname)
    :name{newname}{}

Furniture::Furniture(string newname,double newprice)
    :name{newname},price{newprice}{}

Furniture::Furniture(string newname,double newprice, string newcurrency)
        :name{newname},price{newprice},currency {newcurrency}{}

Furniture::Furniture(string newname,double newprice, string newcurrency,string newcolor)
    :name{newname},price{newprice},currency {newcurrency},color{newcolor}{}

Furniture::Furniture(const Furniture &other)
{
    name = other.name;
    price = other.price;
    currency = other.currency;
    color = other.color;
}

Furniture::Furniture(Furniture&& other)
        :name(other.name), price(other.price), currency(other.currency),color(other.color){
    other.name= " ";
    other.price = 0 ;
    other.currency = " ";
    other.color = " ";
}
Furniture Furniture::operator=(const Furniture &rhs) {
    if(this==&rhs)
        return *this;
    else{
        name=rhs.name;
        price=rhs.price;
        currency=rhs.currency;
        color=rhs.color;
        return *this;
    }
}
ostream &operator<<(ostream &os, const Furniture &obj){
    os<<" Name: "<<obj.name<<" Price: "<<obj.price<<" Currency: "<<obj.currency<<"Color: "<<obj.color;
    return os;
}
