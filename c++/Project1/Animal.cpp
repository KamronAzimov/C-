//
//  Animal.cpp
//  Test
//
//  Created by Mukhammadali Khayotov on 2022/03/17.
//

#include "Animal.hpp"


Animal::Animal(int nl, string t, string skt, float w){
    this -> num_of_legs = nl;
    this -> type = t;
    this -> skin_type = skt;
    this -> weight = w;
}
void Animal::set_num_of_legs(int nl){
    this -> num_of_legs = nl;
}
void Animal::set_type(string t){
    this -> type = t;
}
void Animal::set_skin_type(string skt){
    this -> skin_type = skt;
}
void Animal::set_weight(float w){
    this -> weight = w;
}

//getters
int Animal::get_num_of_legs(){
    return num_of_legs;
}
string Animal::get_type(){
    return type;
}
string Animal::get_skin_type(){
    return skin_type;
}
float Animal::get_weight(){
    return weight;
}

//display
void Animal::display(){
    cout << "Number of legs: " << get_num_of_legs()
    <<endl << "Type: " << get_type()
    <<endl << "Skin type: " << get_skin_type()
    <<endl << "Weight: " << get_weight() << endl;
}

