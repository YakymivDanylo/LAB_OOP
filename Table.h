#ifndef OOP_LAB3_TABLE_H
#define OOP_LAB3_TABLE_H
#include "Furniture.h"
#include <iostream>
using namespace std;
class Table :public Furniture
{
public:

    string material;
    double width;
    double length;
    double height;


    Table();

    Table(string name, double price, string currency,string color,string material,double width,double length,double height);

    Table(const Table &other);

   friend ostream &operator <<(ostream &os,const Table &obj);

    Table operator=(const Table &rhs);

   ~Table(){};

};


#endif
