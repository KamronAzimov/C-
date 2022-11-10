//
//  Animal.hpp
//  Test
//
//  Created by Mukhammadali Khayotov on 2022/03/17.
//

#ifndef Animal_hpp
#define Animal_hpp

#include <iostream>
#include <string>

using namespace std;

class Animal{
  
protected:
    int num_of_legs{0};
    string type;
    string skin_type;
    float weight{0.0};
    
public:
    Animal(int nl, string t, string skt, float w);
    
    //setters
    void set_num_of_legs(int nl);
    void set_type(string t);
    void set_skin_type(string skt);
    void set_weight(float w);
    
    //getters
    int get_num_of_legs();
    string get_type();
    string get_skin_type();
    float get_weight();
    
    void display();
    
};


#endif /* Animal_hpp */
