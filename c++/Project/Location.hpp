//
//Created by Kamron 21SE021
//

#ifndef LOCATION_HPP
#define LOCATION_HPP

#include "Order.hpp"
#include <string>

//using std::string;

class Location:public Order
{
  //Data
private:
  string OldCity;
  double NewCity;

public:
  Location(string Name, int Number, double iD, string Combo, string Pepsi, string Chocolate, string OldCity, double NewCity);

  void setOldCity(string OldCity);
  void setNewCity(double NewCity);

  string getOldCity();
  double getNewCity();

  void display();

};

#endif /* End of Location.hpp */