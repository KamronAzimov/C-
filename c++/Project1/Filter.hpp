//
//  Filter.hpp
//  Project1
//
//  Created by HomeLess on 24/03/22.
//

#ifndef Filter_hpp
#define Filter_hpp

#include <stdio.h>

#include <iostream>
#include <string>

using namespace std;

// Class is Filter which you can filter people that Name, Lastname, Height, Weight and others

class Filter
{
    // Constructor
private:
    //Data
    string FirstName;
    string LastName;
    int Age;
    float Height;
    double Weight;
    string MaleFemale;
public:
    Filter(string fn, string ln, int a, float h, double w, string mf);
    // SETTERS
    void setFirstName(string fn);
    void setLastName(string ln);
    void setAge(int a);
    void setHeight(float h);
    void setWeight(double w);
    void setMaleFemale(string mf);
    
    string getFirstName();
    string getLastName();
    int getAge();
    float getHeight();
    double getWeight();
    string getMaleFemale();
    
    void display();
    
};

// That is all
#endif /* Filter_hpp */
