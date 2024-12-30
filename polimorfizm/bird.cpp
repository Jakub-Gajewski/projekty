#include "Bird.h"
#include <iostream>

Bird::Bird(
    const std::string& s_Name_
    ,int i_Age_
    ,double d_WeightInKilograms_
    ,const std::string& s_Species_
    ,const std::string& s_Habitat_
    ,const std::string& s_Diet_
    ,float f_WingsSpanInCentimeter_
    ,bool b_CanFly_
    ) : Animal(s_Name_, i_Age_, d_WeightInKilograms_, s_Species_, s_Habitat_, s_Diet_)
    ,f_WingsSpanInCentimeter{checkWeight(f_WingsSpanInCentimeter_) ? f_WingsSpanInCentimeter_ : 1.0f}
    ,b_CanFly{b_CanFly_}
{
    std::cout << "Constructor of a bird" << std::endl;
}


Bird::~Bird()
{
    std::cout << "Destructor of a bird" << std::endl;
}


void Bird::speak() const
{
    std::cout << s_Name << " chirps." << std::endl;
}


void Bird::move()
{

    if(!checkWeight(d_WeightInKilograms))
    {
        std::cout << s_Name << " sits on a branch/ground and rests." << std::endl;
    }else
    {
        std::cout << s_Name << " flies/It walks." << std::endl;
        d_WeightInKilograms -= 0.001;
    }
}


void Bird::eat()
{
    std::cout << s_Name << " eats caught insects/fish/seeds." << std::endl;
    d_WeightInKilograms += 0.001;
}


void Bird::sleep() const
{
    std::cout << s_Name << " sleep 10 hours" << std::endl;
}


void Bird::displayInfo() const
{
    std::cout << "--Bird Report--" << std::endl;
    std::cout << "Name: " << s_Name << std::endl;
    std::cout << "Age: " << i_Age << " year(s)" << std::endl;
    std::cout << "Weight: " << d_WeightInKilograms << " kg" << std::endl;
    std::cout << "Species: " << s_Species << std::endl;
    std::cout << "Habitat: " << s_Habitat << std::endl;
    std::cout << "Wingspan: " << f_WingsSpanInCentimeter << " cm" << std::endl;
    std::cout << "Can fly: " << (b_CanFly ? "yes" : "no") << std::endl;
}


void Bird::wagWings() const
{
    std::cout << s_Name << " flaps its wings." << std::endl;
}


bool Bird::checkWingsSpan(const int i_span)
{
    if(i_span <= 0)
    {
        return false;
        std::cerr << "Wingspan cannot be 0." << std::endl;
    }else
    {
        return true;
    }
}
