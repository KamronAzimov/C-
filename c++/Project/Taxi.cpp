//
//Created By Kamron 21SE021
//

#include "Taxi.hpp"

//using std::string;

Taxi::Taxi(string Name, int Number, double iD, string Combo, string Pepsi, string Chocolate, string OldCity, double NewCity, int ComboCost, float PepsiCost, double ChocolateCost, string TaxiName, int TaxiNumber, double CarNumber):Customer(Name, Number, iD):Order(Combo, Pepsi, Chocolate):Location(OldCity, NewCity):Total(ComboCost, PepsiCost, ChocolateCost)
{
  TaxiName = TaxiName;
  TaxiNumber = TaxiNumber;
  CarNumber = CarNumber;
}

void Taxi::setTaxiName()
{ TaxiName = TaxiName; }

void Taxi::setTaxiNumber()
{ TaxiNumber = TaxiNumber; }

void Taxi::setCarNumber()
{ CarNumber = CarNumber; }

string Taxi::getTaxiName()
{ return TaxiName; }

int Taxi::getTaxiNumber()
{ return TaxiNumber; }

double Taxi::getCarNumber()
{ return CarNumber; }

void Taxi::display()
{    Total::Location::Order::Customer.display();

  cout << "Driver's Name is : " << getTaxiName()
  << endl << "Driver's Number is : " << getTaxiNumber()
  << endl << "Driver's Car Number is : " << getCarNumber() << endl;6

}