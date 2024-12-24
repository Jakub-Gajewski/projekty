#include "rightTriangle.h"

RightTriangle::RightTriangle(
    const double dSide1_
    ,const double dSide2_
    ,const double dSide3_
    )
{
    figureName = "Trójkąt prostokątny";
    isPositive(dSide1_, dSide1);
    isPositive(dSide2_, dSide2);
    isPositive(dSide3_, dSide3);

    if (!isRightTriangle())
    {
        std::cerr << "Błąd: Podane boki nie tworzą trójkąta prostokątnego!" << std::endl;
        dSide1 = dSide2 = dSide3 = 0;
    }
    std::cout << "Utworzono trójkąt prostokątny" << std::endl;
}

RightTriangle::~RightTriangle()
{
    std::cout << "Destruktor trojkata" << std::endl;
}

void RightTriangle::setSides()
{
    std::cout << "Podaj 1 bok: " << std::endl;
    std::cin >> dSide1;
    std::cout << "Podaj 2 bok: " << std::endl;
    std::cin >> dSide2;
    std::cout << "Podaj 3 bok: " << std::endl;
    std::cin >> dSide3;

    if (!isRightTriangle()) {
        std::cerr << "Blad: Podane boki nie tworza trojkata!" << std::endl;
    }
}

void RightTriangle::displaySides() const
{
    std::cout << "Bok 1: " << dSide1 << std::endl;
    std::cout << "Bok 2: " << dSide2 << std::endl;
    std::cout << "Bok 3: " << dSide3 << std::endl;
}

double RightTriangle::calculateField()
{
    if (!isRightTriangle())
    {
        std::cerr << "Błąd: Nie jest to trójkąt prostokątny!" << std::endl;
        return 0;
    }

    double base = std::max(dSide1, std::max(dSide2, dSide3));
    double height = (dSide1 == base) ? dSide2 : ((dSide2 == base) ? dSide3 : dSide1);
    dField = 0.5 * base * height;
    return dField;
}


double RightTriangle::calculateCircuit()
{
    if(isRightTriangle())
    {
        dCircuit = dSide1 + dSide2 + dSide3;
        return dCircuit;
    }
    else {
        return 0;
        std::cerr << "Blad: To nie jest trojkat, suma 2 bokow jest mniejsza od trzeciego!" << std::endl;
    }
}

bool RightTriangle::isRightTriangle() const
{
    return (dSide1 * dSide1 + dSide2 * dSide2 == dSide3 * dSide3) ||
           (dSide1 * dSide1 + dSide3 * dSide3 == dSide2 * dSide2) ||
           (dSide2 * dSide2 + dSide3 * dSide3 == dSide1 * dSide1);
}

