//
//Created by Kamron 21SE021
//
#ifndef CUSTOMER_HPP
#define CUSTOMER_HPP

#include <stdio.h>

#include <iostream>
#include <string>

using namespace std;

class Customer
{
  // Data structure
private:
  string Name;
  int Number;
  double iD;

public:
  //Setters
  Customer(string Name, int Number, double iD);
  void setName(string Name);
  void setNumber(int Number);
  void setiD(double iD);

  string getName();
  int getNumber();
  double getiD();

  void display();

  
};


#endif /* Customer */