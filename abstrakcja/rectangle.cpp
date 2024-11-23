#include "rectangle.h"
#include <iostream>

Rectangle::Rectangle(
    const double dSide1_,
    const double dSide2_
    ): dSide1(dSide1_),
    dSide2(dSide2_)
{
    std::cout << "Utworzono prostokat" << std::endl;
}

Rectangle::~Rectangle()
{
    std::cout << "Destruktor prostokata" << std::endl;
}

void Rectangle::setSides()
{
    std::cout << "Podaj 1 bok: " << std::endl;
    std::cin >> dSide1;
    std::cout << "Podaj 2 bok: " << std::endl;
    std::cin >> dSide2;
}

void Rectangle::displaySides()
{
    std::cout << "Bok 1: " << dSide1 << std::endl;
    std::cout << "Bok 2: " << dSide2 << std::endl;
}

double Rectangle::calculateField()
{
    dField = dSide1 * dSide2;
    return dField;
}

double Rectangle::calculateCircuit()
{
    dCircuit = 2 * dSide1 + 2 * dSide2;
    return dCircuit;
}

void Rectangle::displayFieldAndCircuit()
{
    std::cout << "Pole: " << dField << std::endl;
    std::cout << "Obwod: " << dCircuit << std::endl;
}


