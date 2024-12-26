#include "animal.h"

Animal::Animal()
{
    std::cout << "Utworzono zmierze" << std::endl;
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
