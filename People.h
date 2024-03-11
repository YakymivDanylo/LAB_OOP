#ifndef OOP_LAB3_PEOPLE_H
#define OOP_LAB3_PEOPLE_H
#include "iostream"
using namespace std;
class People {
private:
    string name;
    int age;

public:
    People();

    People(string name,int age);

    friend ostream &operator <<(ostream &os,const People &obj);

    People(const People &other);

    ~People(){};


};


#endif
