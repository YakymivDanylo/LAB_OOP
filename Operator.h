#ifndef OOP_LAB3_OPERATOR_H
#define OOP_LAB3_OPERATOR_H
#include <iostream>
using namespace std;
class Operator {
int x,y;

public:
    Operator(int x,int y );
    //Перевантаження унарного оаретора
    Operator operator + () const
    {
        return Operator{x+1,y+1};
    };
    //Перевантаження бінарного оператора
    Operator operator+(const Operator& other) const{
        return Operator{x+other.x,y+other.y};
    }
    string showUnary() const;
    string showBinary() const;
};


#endif //OOP_LAB3_OPERATOR_H
