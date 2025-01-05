#include "fish.h"
#include <iostream>

Fish::Fish(
    const std::string& s_Name_
    ,int i_Age_
    ,double d_WeightInKilograms_
    ,const std::string& s_Species_
    ,const std::string& s_Habitat_
    ,const std::string& s_Diet_
    ,const std::string& s_WaterType_
    ,const std::string& s_SwimDepthInMeters_
    ) : Animal{
            s_Name_
            ,i_Age_
            ,d_WeightInKilograms_
            ,s_Species_
            ,s_Habitat_
            ,s_Diet_
        }
    , s_WaterType{s_WaterType_}
    , s_SwimDepthInMeters{s_SwimDepthInMeters_}
{
    std::cout << "Fish created" << std::endl;
}

Fish::~Fish()
{
    std::cout << "Destructor for fish" << std::endl;
}

void Fish::speak() const
{
    std::cout << s_Name << " goes: blub blub blub" << std::endl;
}

void Fish::move()
{
    if (!checkWeight(d_WeightInKilograms))
    {
        std::cout << s_Name << " drifts and rests" << std::endl;
    } else
    {
        std::cout << s_Name << " is swimming" << std::endl;
        d_WeightInKilograms -= 0.1;
    }
}

void Fish::eat()
{
    if (s_Diet == "herbivorous")
    {
        std::cout << s_Name << " eats plankton/worms" << std::endl;
    }
    else if (s_Diet == "carnivorous")
    {
        std::cout << s_Name << " eats smaller fish/crustaceans" << std::endl;
    } else
    {
        std::cout << s_Name << " eats smaller fish/krill" << std::endl;
    }

    d_WeightInKilograms += 0.01;
}

void Fish::sleep() const
{
    std::cout << s_Name << " regenerates, for example, by swimming near the bottom, from a few minutes to several hours" << std::endl;
}

void Fish::displayInfo() const
{
    std::cout << "--Fish Report--" << std::endl;
    std::cout << "Name: " << s_Name << std::endl;
    std::cout << "Age: " << i_Age << " year(s)" << std::endl;
    std::cout << "Weight: " << d_WeightInKilograms << " kg" << std::endl;
    std::cout << "Species: " << s_Species << std::endl;
    std::cout << "Habitat: " << s_Habitat << std::endl;
    std::cout << "Water type: " << s_WaterType << std::endl;
    std::cout << "Swimming depth: " << s_SwimDepthInMeters << " m" << std::endl;
}

void Fish::wagTail() const
{
    std::cout << s_Name << " wags its tail" << std::endl;
}
