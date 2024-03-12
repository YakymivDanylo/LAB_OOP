#include <iostream>
#include <string>
#include "Order.h"
#include "Furniture.h"
#include "Client.h"
#include "Table.h"
#include "People.h"
#include "Basket.h"

using namespace std;


int main()
{
    //Furniture
    Furniture wardrobe("warbrobe for kitchen",250,"dollars","dark olive");
    cout<<wardrobe<<endl;
    cout<<"\n\n";
    //Client
    Client Demien ("Demien",23,"Koblynska","26.12.2005");
    cout<<Demien<<endl;
    cout<<"\n\n";

    //HAS-A
    Basket basket ("paied",2000);
    //Order
    Order something("Koblynska",2342,"dollars",29,"dollars",basket);
    cout<<something<<endl;
    cout<<endl;

    //Move constructor
    Client Maria= std::move(Demien);
    cout<<"Maria "<<"\n"<<Maria;
    cout<<"\n\n";
    cout<<"Demien "<<"\n"<<Demien;














    return 0;
}