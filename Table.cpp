#include "Table.h"
#include <iostream>
Table::Table()
    :Furniture(),material("unknown"),width(0),length(0),height(0){}

Table::Table(string name, double price, string currency,string color,string material,double width,double length,double height)
        :Furniture(name,price,currency,color), material{material},width{width},length{length},height{height}{}

        Table::Table(const Table &other)
        :Furniture(other),material(other.material),width(other.width),length(other.length),height(other.height){}



  Table Table::operator=(const Table &rhs) {
    if (this == &rhs)
        return*this;
    else{
        Furniture::operator=(rhs);
        name = rhs.name;
        price = rhs.price;
        currency = rhs.currency;
        color = rhs.color;
        material = rhs.material;
        width = rhs.width;
        length = rhs.length;
        height = rhs.height;
         return *this;

    }


}
ostream &operator << (ostream &os, const Table &obj){
    os<<"Name :"<< obj.name<<"Price :"<<obj.price<<"Currency :"<<obj.currency<<"Color :"<<obj.color<<"Material :"<< obj.material<<"Width :"<<obj.width<<"Length :"<<obj.length<<"Height :"<<obj.height;
}