#ifndef LAB2_OOP_CLIENT_H
#define LAB2_OOP_CLIENT_H
#include <iostream>
#include "People.h"
using namespace std;

class Client : public People{
private:
    string livingAddress;
    string dateOfBirth;
    bool identification() {
        return true;
    };
public:
    Client();
    Client(string name,int age,string livingAddress, string dateOfBirth) ;
    friend ostream &operator <<(ostream &os,const Client &obj);
    Client(const Client &other);
    Client(Client &&other);
    ~Client(){};


};
#endif