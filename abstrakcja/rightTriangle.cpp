#include "rightTriangle.h"
#include <iostream>

RightTriangle::RightTriangle(
    const double dSide1_,
    const double dSide2_,
    const double dSide3_
    ) : dSide1(dSide1_),
    dSide2(dSide2_),
    dSide3(dSide3_)
{
    std::cout << "Utworzono trojkat prostokatny" << std::endl;
}

RightTriangle::~RightTriangle()
{
    std::cout << "Destruktor krojkata" << std::endl;
}

void RightTriangle::setSides()
{
    std::cout << "Podaj 1 bok: " << std::endl;
    std::cin >> dSide1;
    std::cout << "Podaj 2 bok: " << std::endl;
    std::cin >> dSide2;
    std::cout << "Podaj 3 bok: " << std::endl;
    std::cin >> dSide3;
}

void RightTriangle::displaySides()
{
    std::cout << "Bok 1: " << dSide1 << std::endl;
    std::cout << "Bok 2: " << dSide2 << std::endl;
    std::cout << "Bok 3: " << dSide3 << std::endl;
}

double RightTriangle::calculateField()
{
    int result = isTriangle(dSide1, dSide2, dSide3);

    return result;

    if(result = 0)
    {
        std::cerr << "Blad: To nie jest trójkąt, suma 2 bokow jest mniejsza od trzeciego!" << std::endl;
    }
}

double RightTriangle::calculateCircuit()
{
    if(isTriangle(dSide1, dSide2, dSide3) > 0)
    {
        dCircuit = dSide1 + dSide2 + dSide3;
        return dCircuit;
    }
    else {
        return 0;
        std::cerr << "Blad: To nie jest trójkąt, suma 2 bokow jest mniejsza od trzeciego!" << std::endl;
    }
}

void RightTriangle::displayFieldAndCircuit()
{
    std::cout << "Pole: " << dField << std::endl;
    std::cout << "Obwod: " << dCircuit << std::endl;
}

int RightTriangle::isTriangle(double dSide1, double dSide2, double dSide3)
{
    if(dSide1 + dSide2 > dSide3 && dSide1 + dSide3 > dSide2 && dSide3 + dSide2 > dSide1)
    {
        if(dSide1 < dSide3 && dSide2 < dSide3)
        {
            dField = (dSide1 * dSide2) / 2;
            return dField;
        }
        else if(dSide1 < dSide2 && dSide3 < dSide2)
        {
            dField = (dSide1 * dSide3) / 2;
            return dField;
        }
        else {
            dField = (dSide2 * dSide3) / 2;
            return dField;
        }
    }
    else {
        return 0;
    }
}
