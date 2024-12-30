#include "animal.h"
#include <iostream>

Animal::Animal(
    const std::string& s_Name_
    ,int i_Age_
    ,double d_WeightInKilograms_
    ,const std::string& s_Species_
    ,const std::string& s_Habitat_
    ,const std::string& s_Diet_
    ) : s_Name{s_Name_},
    i_Age{checkAge(i_Age_) ? i_Age_ : 0},
    d_WeightInKilograms{checkWeight(d_WeightInKilograms_) ? d_WeightInKilograms_ : 1.0},
    s_Species{s_Species_},
    s_Habitat{s_Habitat_},
    s_Diet{s_Diet_}
{
    std::cout << "Constructor of a animal" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Destructor of a animal" << std::endl;
}

bool Animal::checkAge(const int i_age)
{
    if(i_age < 0)
    {
        return false;
        std::cerr << "Age cannot be less than 0, wait until they are born!" << std::endl;
    }else
    {
        return true;
    }
}

bool Animal::checkWeight(const int i_weight)
{
    if(i_weight <= 0)
    {
        return false;
        std::cerr << "Weight cannot be 0, it needs to eat something" << std::endl;
    }else
    {
        return true;
    }
}
