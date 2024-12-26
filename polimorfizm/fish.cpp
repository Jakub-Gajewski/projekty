#include "fish.h"

Fish::Fish(
    const std::string& sName_
    ,int iAge_
    ,double dWeight_
    ,const std::string& sSpecies_
    ,const std::string& sHabitat_
    ,const std::string& sDiet_
    ,const std::string& sWaterType_
    ,const std::string& sSwimDepth_
    ) : Animal(sName_, iAge_, dWeight_, sSpecies_, sHabitat_, sDiet_)
    ,sWaterType{sWaterType_}
    ,sSwimDepth{sSwimDepth_}
{
    std::cout << "Utworzono rybe" << std::endl;
}


Fish::~Fish()
{
    std::cout << "Destruktor dla ryby" << std::endl;
}

void Fish::speak() const
{
    std::cout << sName << " robi: bul bul bul" << std::endl;
}

void Fish::move()
{

    if(!checkWeight(dWeight))
    {
        std::cout << sName << " dryfuje, i odpoczywa" << std::endl;
    }else
    {
        std::cout << sName << " plynie" << std::endl;
        dWeight -= 0.1;
    }
}

void Fish::eat()
{
    if(sDiet == "roslinozerne")
    {
        std::cout << sName << " je plankton/mol" << std::endl;
    }
    else if(sDiet == "miesozerne")
    {
         std::cout << sName << " je mniejsze ryby/skorupiaki" << std::endl;
    }else
    {
        std::cout << sName << " je mniejsze ryby/kryl" << std::endl;
    }

    dWeight += 0.01;
}

void Fish::sleep() const
{
    std::cout << sName << " regeneruje się, np. plywajac przy dnie, kilka minut do kilku godzin " << std::endl;
}

void Fish::displayInfo() const
{
    std::cout << "--Raport o rybie--" << std::endl;
    std::cout << "Imie: " << sName << std::endl;
    std::cout << "Wiek: " << iAge << " rok/lat" << std::endl;
    std::cout << "Waga: " << dWeight << " kg" << std::endl;
    std::cout << "Gatunek: " << sSpecies << std::endl;
    std::cout << "Srodowisko: " << sHabitat << std::endl;
    std::cout << "Typ wody: " << sWaterType << std::endl;
    std::cout << "Glebokosc plywanie: " << sSwimDepth << " m" << std::endl;
}

void Fish::wagTail() const
{
    std::cout << sName << " macha ogonem" << std::endl;
}

