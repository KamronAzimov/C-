//
//Created by Kamron 21SE021
//
#ifndef ORDER_HPP
#define ORDER_HPP

#include "Customer.hpp"
#include <string>

//using std::string;

class Order:public Customer
{
//   Data
private:
  string Combo;
  string Pepsi;
  string Chocolate;

public:
// Setters
  Order(string Name, int Number, double iD, string Combo, string Pepsi, string Chocolate);

  void setCombo(string Combo);
  void setPepsi(string Pepsi);
  void setChocolate(string Chocolate);

  string getCombo();
  string getPepsi();
  string getChocolate();

  void display();
};

#endif /* End of Order.hpp */