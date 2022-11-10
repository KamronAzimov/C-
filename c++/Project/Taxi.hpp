//
//Created by Kamron 21SE021
// 
#ifndef TAXI_HPP
#define TAXI_HPP

#include "Total.hpp"
#include <string>

// using std::string;

class Taxi:public Total
{
  //Data
private:
  string TaxiName = "POJ";
  int TaxiNumber = 990010110;
  double CarNumber= 111;
public:
  //setters
  Taxi(string Name, int Number, double iD, string Combo, string Pepsi, string Chocolate, string OldCity, double NewCity, int ComboCost, float PepsiCost, double ChocolateCost, string TaxiName, int TaxiNumber, double CarNumber);
  
  void setTaxiName(string TaxiName);
  void setTaxiNumber(int TaxiNumber);
  void setCarNumber(double CarNumber);

  string getTaxiName();
  int getTaxiNumber();
  double getCarNumber();

  void display();
};

#endif /* End of Taxi.hpp */