#include "square.h"
#include <iostream>
#include <cmath>

Square::Square(
    const double dSide_
    ) : dSide(dSide_)
{
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
}

void Square::displaySides()
{
    std::cout << "Bok : " << dSide << std::endl;
}

double Square::calculateField()
{
    dField = pow(dSide, 2);
    return dField;
}

double Square::calculateCircuit()
{
    dCircuit = 4 * dSide;
    return dCircuit;
}

void Square::displayFieldAndCircuit()
{
    std::cout << "Pole: " << dField << std::endl;
    std::cout << "Obwod: " << dCircuit << std::endl;
}


