//
//Created by Kamron 21SE021
//

#include "Location.hpp"

//using namespace std;

Location::Location(string Name, int Number, double iD, string Combo, string Pepsi, string Chocolate, string OldCity, double NewCity):Customer(Name, Number, iD):Order(Combo, Pepsi, Chocolate)
{
  OldCity = OldCity;
  NewCity = NewCity;
}

void Location::setOldCity()
{ OldCity = OldCity; }

void Location::setNewCity()
{ NewCity = NewCity; }

string Location::getOldCity()
{ return OldCity; }

double Location::getNewCity()
{ return NewCity; }

void Location::display()
{    Order::Customer.display();

    cout << "Where you can take you Order ? " << endl;
    cout << "Old City " << getOldCity() << endl;
    cout << "New City " << getNewCity() << endl;

    cin << OldCity, NewCity;
    
}
