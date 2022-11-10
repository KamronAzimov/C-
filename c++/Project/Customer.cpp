//
//Created by Kamron 21SE021
//

#include "Customer.hpp"

using namespace std;

Customer::Customer(string Name, int Number, double iD)
{
  Name = Name;
  Number = Number;
  iD = iD;
}

void Customer::setName(string Name)
{ Name = Name; }

void Customer::setNumber(int Number)
{ Number = Number; }

void Customer::setiD(double iD)
{ iD = iD; }

string Customer::getName()
{ return Name; }

int Customer::getNumber()
{ return Number; }

double Customer::getiD()
{ return iD; }

void Customer::display()
{
  cout << "Please Enter your Name ? " << endl;
  cin >> Name;
  cout << "Please Enter Your Number : " << endl;
  cin >> Number;
  cout << "Please Enter Your iD : " << endl;
  cin >> iD;
  cout << "Name : " << getName() <<endl;
  cout << "Number : " << getNumber() << endl;
  cout << "iD : " << getiD() << endl;
}

// End of Customer.cpp