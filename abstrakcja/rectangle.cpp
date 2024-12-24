#include "rectangle.h"

Rectangle::Rectangle(
    double dSide1_
    ,double dSide2_
    )
{
    figureName = "Prostokat";
    isPositive(dSide1_, dSide1);
    isPositive(dSide2_, dSide2);
    if (dSide1 == 0) dSide1 = 1;
    if (dSide2 == 0) dSide2 = 1;
    std::cout << "Utworzono prostokat" << std::endl;
}


Rectangle::~Rectangle()
{
    std::cout << "Destruktor prostokata" << std::endl;
}

void Rectangle::setSides()
{
    std::cout << "Podaj 1 bok: ";
    std::cin >> dSide1;
    isPositive(dSide1, dSide1);

    std::cout << "Podaj 2 bok: ";
    std::cin >> dSide2;
    isPositive(dSide2, dSide2);
}

void Rectangle::displaySides() const
{
    std::cout << "Bok 1: " << dSide1 << std::endl;
    std::cout << "Bok 2: " << dSide2 << std::endl;
}

double Rectangle::calculateField()
{
    if (dSide1 <= 0 || dSide2 <= 0)
    {
        std::cerr << "Bład: Boki musza być dodatnie!" << std::endl;
        return 0;
    }
    dField = dSide1 * dSide2;
    return dField;
}

double Rectangle::calculateCircuit()
{
    if (dSide1 <= 0 || dSide2 <= 0)
    {
        std::cerr << "Bład: Boki musza być dodatnie!" << std::endl;
        return 0;
    }
    dCircuit = 2 * (dSide1 + dSide2);
    return dCircuit;
}

