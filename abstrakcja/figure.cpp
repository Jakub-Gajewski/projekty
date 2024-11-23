#include "figure.h"
#include <iostream>

Figure::Figure()
{
    std::cout << "Utworzono figure" << std::endl;
}

Figure::~Figure()
{
    std::cout << "Destruktor figury" << std::endl;
}

double Figure::getField() const
{
    return dField;
}

double Figure::getCircuit() const
{
    return dCircuit;
}

void isPositive(int number, int& variableName)
{
    if(number > 0){
        variableName = number;
    }
    else{
        variableName = 0;
        std::cerr << "Błąd! Wartosc musi byc dodatnia, zmiana wartosci na 1" << std::endl;
    }
}



