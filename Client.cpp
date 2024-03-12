#include "Client.h"
#include <iostream>

Client::Client()
    :People(),livingAddress("unknown"),dateOfBirth("unknown"){}

    Client::Client(string name,int age,string livingAddress, string dateOfBirth)
    :People(name,age),livingAddress("unknown"),dateOfBirth("unknown"){}

    Client::Client(const Client &other)
    :People(other),livingAddress(other.livingAddress),dateOfBirth(other.dateOfBirth){}

Client::Client( Client &&other)
        :People(other),livingAddress(other.livingAddress),dateOfBirth(other.dateOfBirth)
        {
    other.name = " ";
    other.age = 0;
    other.livingAddress = "";
    other.dateOfBirth = " ";
        }











