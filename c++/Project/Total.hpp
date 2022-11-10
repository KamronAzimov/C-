//
//Created by Kamron 21SE021
//

#ifndef TOTAL_HPP
#define TOTAL_HPP

#include "Location.hpp"
#include <string>

//using std::string;

class Total:public Location
{
private:
  int ComboCost = 12;
  float PepsiCost = 6.6;
  double ChocolateCost = 8.1;

public:
  Total(string Name, int Number, double iD, string Combo, string Pepsi, string Chocolate, string OldCity, double NewCity, int ComboCost, float PepsiCost, double ChocolateCost);

  void setComboCost(int ComboCost);
  void setPepsiCost(float PepsiCost);
  void setChocolateCost(double ChocolateCost);

  int getComboCost();
  float getPepsiCost();
  double getChocolateCost();

  void display();

};

#endif /* end of Total.hpp */