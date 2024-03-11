#ifndef LAB2_OOP_GOODS_H
#define LAB2_OOP_GOODS_H
#include <iostream>
using namespace std;

class Furniture{
public:
    string name;
    double price;
    string currency;
    string color;

    bool availability()
    {
        return false;
    };

    Furniture();
    
    Furniture(string name);

    Furniture(string name, double rice);

    Furniture(string name, double price, string currency );

    Furniture(string name, double price, string currency,string color );

    Furniture(const Furniture &other);

    Furniture(Furniture &&other);

    friend ostream &operator <<(ostream &os,const Furniture &obj);

    Furniture operator=(const Furniture &rhs);

    ~Furniture(){};




};




#endif
