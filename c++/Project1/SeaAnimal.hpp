//
//  SeaAnimal.hpp
//  Test
//
//  Created by Mukhammadali Khayotov on 2022/03/17.
//

#ifndef SeaAnimal_hpp
#define SeaAnimal_hpp

#include "Animal.hpp"

class SeaAnimal : public Animal{
  
private:
    int life_expectancy{0};
    int age{0};
    
public:
    SeaAnimal(int nl, string t, string skt, float w, int le, int a);
    
    //setters
    void set_life_expectancy(int le);
    void set_age(int a);
    
    //getters
    int get_life_expectancy();
    int get_age();
    
    //display
    void display();
    
};

#endif /* SeaAnimal_hpp */
