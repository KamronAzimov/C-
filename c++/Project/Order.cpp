// 
//Created by Kamron 21SE021
//

#include "Order.hpp"

//using namespace std;

Order::Order(string Name, int Number, double iD, string Combo, string Pepsi, string Chocolate):Customer(Name, Number, iD)
{
  Combo = Combo;
  Pepsi = Pepsi;
  Chocolate = Chocolate;

}

void Order::setCombo(string Combo)
{ Combo = Combo; }

void Order::setPepsi(string Pepsi)
{ Pepsi = Pepsi; }

void Order::setChocolate(string Chocolate)
{ Chocolate = Chocolate; }

string Order::getCombo()
{ return Combo; }

string Order::getPepsi()
{ return Pepsi; }

string Order::getChocolate()
{ return Chocolate; }

void Order::display()
{    Customer::display();

      cout << "We have Combo " << getCombo() << endl
      << "And also from beverage Pepsi " << getPepsi() << endl
      << "Finally You can order Chocolate " << getChocolate() << endl
      << "Input What do you want ? " << endl;

      cin >> Combo, Pepsi, Chocolate;
}