#include "Bird.h"

Bird::Bird(
    const std::string& sName_
    ,int iAge_
    ,double dWeight_
    ,const std::string& sSpecies_
    ,const std::string& sHabitat_
    ,const std::string& sDiet_
    ,float fWingsSpan_
    ,bool bCanFly_
    ) : Animal(sName_, iAge_, dWeight_, sSpecies_, sHabitat_, sDiet_)
    ,fWingsSpan{checkWeight(fWingsSpan_) ? fWingsSpan_ : 1.0f}
    ,bCanFly{bCanFly_}
{
    std::cout << "Utworzono ptaka" << std::endl;
}


Bird::~Bird()
{
    std::cout << "Destruktor dla ptaka" << std::endl;
}


void Bird::speak() const
{
    std::cout << sName << " robi: Cwir! Cwir!" << std::endl;
}


void Bird::move()
{

    if(!checkWeight(dWeight))
    {
        std::cout << sName << " siedzi na galezi/ziemi i odpoczywa" << std::endl;
    }else
    {
        std::cout << sName << " leci/idzie" << std::endl;
        dWeight -= 0.001;
    }
}


void Bird::eat()
{
    std::cout << sName << " je zlapane owady/ryby/nasiona" << std::endl;
    dWeight += 0.001;
}


void Bird::sleep() const
{
    std::cout << sName << " spi 10 godzin" << std::endl;
}


void Bird::displayInfo() const
{
    std::cout << "--Raport o ptaku--" << std::endl;
    std::cout << "Imie: " << sName << std::endl;
    std::cout << "Wiek: " << iAge << " rok/lat" << std::endl;
    std::cout << "Waga: " << dWeight << " kg" << std::endl;
    std::cout << "Gatunek: " << sSpecies << std::endl;
    std::cout << "Srodowisko: " << sHabitat << std::endl;
    std::cout << "Rozpietosc skrzydel: " << fWingsSpan << std::endl;
    std::cout << "Czy lata: " << (bCanFly ? "tak" : "nie") << std::endl;
}


void Bird::wagWings() const
{
    std::cout << sName << " macha skrzydlami" << std::endl;
}


bool Bird::checkWingsSpan(const int span)
{
    if(span <= 0)
    {
        return false;
        std::cerr << "Rozpietosc skrzydel nie moze byc rowna 0" << std::endl;
    }else
    {
        return true;
    }
}
