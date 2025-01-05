#include "dog.h"
#include <iostream>

Dog::Dog(
    const std::string& s_Name_
    ,int i_Age_
    ,double d_WeightInKilograms_
    ,const std::string& s_Species_
    ,const std::string& s_Habitat_
    ,const std::string& s_Diet_
    ,const std::string& s_Breed_
    ,bool b_IsAggressive_
    ) : Animal{
            s_Name_
            ,i_Age_
            ,d_WeightInKilograms_
            ,s_Species_
            ,s_Habitat_
            ,s_Diet_
        }
    , s_Breed{s_Breed_}
    , b_IsAggressive{b_IsAggressive_}
{
    std::cout << "Dog created" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Destructor for dog" << std::endl;
}

void Dog::speak() const
{
    if(b_IsAggressive)
    {
        std::cout << s_Name << " says: Grrr!" << std::endl;
    } else
    {
        std::cout << s_Name << " says: Woof! Woof!" << std::endl;
    }
}

void Dog::move()
{
    if(!checkWeight(d_WeightInKilograms))
    {
        std::cout << s_Name << " is lying down and resting" << std::endl;
    } else
    {
        std::cout << s_Name << " is running" << std::endl;
        d_WeightInKilograms -= 0.1;
    }
}

void Dog::eat()
{
    std::cout << s_Name << " is eating a sausage stolen from the table" << std::endl;
    d_WeightInKilograms += 0.1;
}

void Dog::sleep() const
{
    std::cout << s_Name << " sleeps for 13 hours" << std::endl;
}

void Dog::displayInfo() const
{
    std::cout << "--Dog Report--" << std::endl;
    std::cout << "Name: " << s_Name << std::endl;
    std::cout << "Age: " << i_Age << " year(s)" << std::endl;
    std::cout << "Weight: " << d_WeightInKilograms << " kg" << std::endl;
    std::cout << "Species: " << s_Species << std::endl;
    std::cout << "Habitat: " << s_Habitat << std::endl;
    std::cout << "Breed: " << s_Breed << std::endl;
    std::cout << "Aggressive: " << (b_IsAggressive ? "yes" : "no") << std::endl;
}

void Dog::wagTail() const
{
    std::cout << s_Name << " wags its tail" << std::endl;
}

void Dog::fetch(const std::string& s_item)
{
    std::cout << s_Name << " fetches the " << s_item << std::endl;
}
