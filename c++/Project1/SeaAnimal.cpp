//
//  SeaAnimal.cpp
//  Test
//
//  Created by Mukhammadali Khayotov on 2022/03/17.
//

#include "SeaAnimal.hpp"


SeaAnimal::SeaAnimal(int nl, string t, string skt, float w, int le, int a)
: Animal(nl, t, skt, w) {
    this -> life_expectancy = le;
    this -> age = a;
}

void SeaAnimal::set_life_expectancy(int le){
    this -> life_expectancy = le;
}
void SeaAnimal::set_age(int a){
    this -> age = a;
}

//getters
int SeaAnimal::get_life_expectancy(){
    return life_expectancy;
}
int SeaAnimal::get_age(){
    return age;
}

//display
void SeaAnimal::display(){
    Animal::display();
    cout << "Life Expectancy: " << get_life_expectancy()
    <<endl << "Age: " << get_age() << endl;
}
