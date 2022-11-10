//
//Created by Kamron 21SE021
//
#include "Customer.hpp"
#include "Order.hpp"
#include "Location.hpp"
#include "Total.hpp"
#include "Taxi.hpp"

//using std::string;

int main()
{
  
  Customer customer(string Name, int Number, double iD);
  customer.display();

  Order order(string Combo, string Pepsi, string Chocolate);
  order.display();

  Location location(string OldCity, double NewCity);
  location.display();

  Total total(int ComboCost, float PepsiCost, double ChocolateCost);
  total.display();

  Taxi taxi(string TaxiName, int TaxiNumber, double CarNumber);
  taxi.display();

  return 0;
}

// Hello Professor I think I have problem with my windows system but i am trying to fix it 
// Maybe problem with string format because string is not work looks like <error-type> Name,Combo and other string chars