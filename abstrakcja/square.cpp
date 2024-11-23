#include "square.h"
#include <iostream>

Square::Square(
    const double dSide_
    )
{
    figureName = "Kwadrat";
    isPositive(dSide_, dSide);
    std::cout << "Utworzono kwadrat" << std::endl;
}

Square::~Square()
{
    std::cout << "Destruktor kwadratu" << std::endl;
}

void Square::setSides()
{
    std::cout << "Podaj bok: " << std::endl;
    std::cin >> dSide;

    isPositive(dSide, dSide);
}

void Square::displaySides()
{
    std::cout << "Bok : " << dSide << std::endl;
}

double Square::calculateField()
{
    dField = dSide * dSide;
    return dField;
}

double Square::calculateCircuit()
{
    dCircuit = 4 * dSide;
    return dCircuit;
}



