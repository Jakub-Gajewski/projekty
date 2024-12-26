#include "dog.h"

Dog::Dog(
    const std::string& sName_,
    int iAge_,
    double dWeight_,
    const std::string& sSpecies_,
    const std::string& sHabitat_,
    const std::string& sDiet_,
    const std::string& sBreed_,
    bool sIsAggressive_
    )
    : sName{sName_},
    iAge{checkAge(iAge_) ? iAge_ : 0},
    dWeight{checkWeight(dWeight_) ? dWeight_ : 1.0},
    sSpecies{sSpecies_},
    sHabitat{sHabitat_},
    sDiet{sDiet_},
    sBreed{sBreed_},
    sIsAggressive{sIsAggressive_}
{
    std::cout << "Utworzono psa" << std::endl;
}


Dog::~Dog()
{
    std::cout << "Destruktor dla psa" << std::endl;
}

void Dog::speak() const override
{
    if(sIsAggressive)
    {
        std::cout << sName << " robi: Wrrr!" << std::endl;
    }else
    {
        std::cout << sName << " robi: Hau! Hau!" << std::endl;
    }
}

void Dog::move() override
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

void Dog::eat() override
{
    std::cout << sName << " je skradziona ze stolu parowke " << std::endl;
    dWeight += 0.1;
}

void Dog::sleep() const override
{
    std::cout << sName << " spi 13 godzin " << std::endl;
}

void Dog::displayInfo() const override
{
    std::cout << "--Raport o psie--" << std::endl;
    std::cout << "Imie: " << sName << std::endl;
    std::cout << "Wiek: " << iAge << std::endl;
    std::cout << "Waga: " << dWeight << std::endl;
    std::cout << "Gatunek: " << sSpecies << std::endl;
    std::cout << "Srodowisko: " << sHabitat << std::endl;
    std::cout << "Rasa: " << sBreed << std::endl;
    std::cout << "Czy agresywny: " << sIsAggressive ? "tak" : "nie" << std::endl;
}

void Dog::wagTail() const
{
    std::cout << sName << " macha ogonem" << std::endl;
}


void Dog::fetch(const std::string& item)
{
    std::cout << sName << " aportuje" << item << std::endl;
}
