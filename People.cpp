#include "People.h"
#include <iostream>
 People::People()
  :People{"noname",0}{}

  People::People(string name,int age)
  : name{name},age{age}{}

People::People(const People &other)
{
    name = other.name;
    age = other.age;

}

  ostream &operator<<(ostream &os,const People &obj){
    os<<"Name: "<<obj.name<<"Age: "<<obj.age;
    return os;
}

People::People(People &&other)  noexcept : name{std::move(other.name)}, age{other.age} {

}
