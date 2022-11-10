//
//  Filter.cpp
//  Project1
//
//  Created by HomeLess on 24/03/22.
//

#include "Filter.hpp"

//using namespace std;
// Data
Filter :: Filter(string fn, string ln, int a, float h, double w, string mf)
{
    FirstName = fn;
    LastName = ln;
    Age = a;
    Height = h;
    Weight = w;
    MaleFemale = mf;
    // done this part
}

void Filter::setFirstName(string fn)
{ FirstName = fn; }

void Filter::setLastName(string ln)
{ LastName = ln; }

void Filter::setAge(int a)
{ Age = a; }

void Filter::setHeight(float h)
{ Height = h; }

void Filter::setWeight(double w)
{ Weight = w; }

void  Filter::setMaleFemale(string mf)
{ MaleFemale = mf; }

//

string Filter::getFirstName()
{ return FirstName; }

string Filter::getLastName()
{ return  LastName; }

int Filter:: getAge()
{ return  Age; }

float Filter::getHeight()
{ return  Height; }

double Filter::getWeight()
{ return  Weight; }

string Filter::getMaleFemale()
{ return MaleFemale; }

void Filter::display()
{
    cout <<  " Please enter Your First Name: " << getFirstName() << endl;
    cin >> FirstName;
    cout << " And also input Your Last Name: " << getLastName() << endl;
    cin >> LastName;
    cout << " After that enter Your Age: " << getAge() << endl;
    cin >> Age;
    cout << " We need Your Height please input your Height: " << getHeight() << endl;
    cin >> Height;
    cout << " Additionally Your Weight: " << getWeight() << endl;
    cin >> Weight;
    cout << " Finally You are Male either Female: " << getMaleFemale() << endl;
    cin >> MaleFemale;
    
}

// End of Filter.cpp
