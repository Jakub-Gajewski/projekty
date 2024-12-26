#include "animal.h"

Animal::Animal(
    const std::string& sName_
    ,int iAge_
    ,double dWeight_
    ,const std::string& sSpecies_
    ,const std::string& sHabitat_
    ,const std::string& sDiet_
    ) : sName{sName_},
    iAge{checkAge(iAge_) ? iAge_ : 0},
    dWeight{checkWeight(dWeight_) ? dWeight_ : 1.0},
    sSpecies{sSpecies_},
    sHabitat{sHabitat_},
    sDiet{sDiet_}
{
    std::cout << "Utworzono zwierze" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Destruktor zwierzecia" << std::endl;
}

bool Animal::checkAge(const int age)
{
    if(age < 0)
    {
        return false;
        std::cerr << "Wiek nie moze byc mniejszy od 0, poczekaj az sie urodzi!" << std::endl;
    }else
    {
        return true;
    }
}

bool Animal::checkWeight(const int weight)
{
    if(weight <= 0)
    {
        return false;
        std::cerr << "Waga nie moze byc rowna 0, musi cos zjesc" << std::endl;
    }else
    {
        return true;
    }
}
