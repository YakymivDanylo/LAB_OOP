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

    //Client
    Client Demien ("Demien",23,"Koblynska","26.12.2005");
    cout<<Demien<<endl;


    //HAS-A
    Basket basket ("paied",2000);
    //Order
    Order oesfhs("Koblynska",2342,"dollars",29,"dollars",basket);
    cout<<oesfhs<<endl;
    Client Maria = move(Demien);
    cout<<Maria;
    cout<<endl;
    cout<<Demien;













    return 0;
}