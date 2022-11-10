//
//Created by Kamron 21SE021
//

#include "Total.hpp"

Total::Total(string Name, int Number, double iD, string Combo, string Pepsi, string Chocolate, string OldCity, string NewCity, int ComboCost, float PepsiCost, double ChocolateCost):Customer(Name, Number, iD):Order(Combo, Pepsi, Chocolate):Location(OldCity, NewCity)
{
  ComboCost = ComboCost;
  PepsiCost = PepsiCost;
  ChocolateCost = ChocolateCost;
}

void Total::setComboCost()
{ ComboCost = ComboCost; }

void Total::setPepsiCost()
{ PepsiCost = PepsiCost; }

void Total::setChocolateCost()
{ ChocolateCost = ChocolateCost; }

int Total::getComboCost()
{ return ComboCost; }

float Total::getPepsiCost()
{ return PepsiCost; }

double Total::getChocolateCost()
{ return ChocolateCost; }

void Total::display()
{    Location::Order::Customer.display();

  cout << " Combo Cost is : " << getComboCost()
  << endl << " Pepsi Cost is : " << getPepsiCost()
  << endl << " Chocolate Cost is :" << getChocolateCost() << endl;

}