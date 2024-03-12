#include "Client.h"
#include <iostream>

Client::Client()
    :People(),livingAddress("unknown"),dateOfBirth("unknown"){}

    Client::Client(string name,int age,string livingAddress, string dateOfBirth)
    :People(name,age),livingAddress(livingAddress),dateOfBirth(dateOfBirth){}

ostream &operator<<(ostream &os,const Client &obj) {
    os << "Name: " << obj.name << "; Age: " << obj.age << "; Living address: " << obj.livingAddress << "; Date of birthday: "
       << obj.dateOfBirth;
    return os;
}
    Client::Client(const Client &other)
    :People(other),livingAddress(other.livingAddress),dateOfBirth(other.dateOfBirth){}

Client::Client( Client &&other)
        :People(other),livingAddress(other.livingAddress),dateOfBirth(other.dateOfBirth)
        {
            other.name = "noname ";
            other.age = 0;
        other.livingAddress = " unknown";
        other.dateOfBirth = "unknown ";
        }












