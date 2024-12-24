#include "square.h"

Square::Square(
    const double dSide_
    )
{
    figureName = "Kwadrat";
    isPositive(dSide_, dSide);
    if (dSide == 0) dSide = 1;
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

void Square::displaySides() const
{
    std::cout << "Bok : " << dSide << std::endl;
}

double Square::calculateField()
{
    if (dSide <= 0)
    {
        std::cerr << "Błąd: Bok musi być dodatni!" << std::endl;
        return 0;
    }
    dField = dSide * dSide;
    return dField;
}

double Square::calculateCircuit()
{
    dCircuit = 4 * dSide;
    return dCircuit;
}



