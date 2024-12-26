#include "dog.h"

Dog::Dog(
    const std::string& sName_
    ,int iAge_
    ,double dWeight_
    ,const std::string& sSpecies_
    ,const std::string& sHabitat_
    ,const std::string& sDiet_
    ,const std::string& sBreed_
    ,bool bIsAggressive_
    ) : Animal(sName_, iAge_, dWeight_, sSpecies_, sHabitat_, sDiet_)
    ,sBreed{sBreed_}
    ,bIsAggressive{bIsAggressive_}
{
    std::cout << "Utworzono psa" << std::endl;
}


Dog::~Dog()
{
    std::cout << "Destruktor dla psa" << std::endl;
}

void Dog::speak() const
{
    if(bIsAggressive)
    {
        std::cout << sName << " robi: Wrrr!" << std::endl;
    }else
    {
        std::cout << sName << " robi: Hau! Hau!" << std::endl;
    }
}

void Dog::move()
{

    if(!checkWeight(dWeight))
    {
        std::cout << sName << " lezy, i odpoczywa" << std::endl;
    }else
    {
        std::cout << sName << " biegnie" << std::endl;
        dWeight -= 0.1;
    }
}

void Dog::eat()
{
    std::cout << sName << " je skradziona ze stolu parowke " << std::endl;
    dWeight += 0.1;
}

void Dog::sleep() const
{
    std::cout << sName << " spi 13 godzin " << std::endl;
}

void Dog::displayInfo() const
{
    std::cout << "--Raport o psie--" << std::endl;
    std::cout << "Imie: " << sName << std::endl;
    std::cout << "Wiek: " << iAge << " rok/lat" << std::endl;
    std::cout << "Waga: " << dWeight << " kg" << std::endl;
    std::cout << "Gatunek: " << sSpecies << std::endl;
    std::cout << "Srodowisko: " << sHabitat << std::endl;
    std::cout << "Rasa: " << sBreed << std::endl;
    std::cout << "Czy agresywny: " << (bIsAggressive ? "tak" : "nie") << std::endl;
}

void Dog::wagTail() const
{
    std::cout << sName << " macha ogonem" << std::endl;
}


void Dog::fetch(const std::string& item)
{
    std::cout << sName << " aportuje" << item << std::endl;
}
