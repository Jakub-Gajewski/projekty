#include "rightTriangle.h"
#include <iostream>

RightTriangle::RightTriangle(
    const double d_Side1_
    ,const double d_Side2_
    ,const double d_Side3_
    )
{
    s_figureName = "Right Triangle";
    isPositive(d_Side1_, d_Side1);
    isPositive(d_Side2_, d_Side2);
    isPositive(d_Side3_, d_Side3);

    if (!isRightTriangle())
    {
        std::cerr << "Error: The given sides do not form a right triangle!" << std::endl;
        d_Side1 = d_Side2 = d_Side3 = 0;
    }
    std::cout << "Constructor of a Right Triangle" << std::endl;
}

RightTriangle::~RightTriangle()
{
    std::cout << "Destructor of a Right Triangle" << std::endl;
}

void RightTriangle::setSides()
{
    std::cout << "Enter 1 side: " << std::endl;
    std::cin >> d_Side1;
    std::cout << "Enter 2 side: " << std::endl;
    std::cin >> d_Side2;
    std::cout << "Enter 3 side: " << std::endl;
    std::cin >> d_Side3;

    if (!isRightTriangle()) {
        std::cerr << "Error: The given sides do not form a right triangle!" << std::endl;
    }
}

void RightTriangle::displaySides() const
{
    std::cout << "Side 1: " << d_Side1 << std::endl;
    std::cout << "Side 2: " << d_Side2 << std::endl;
    std::cout << "Side 3: " << d_Side3 << std::endl;
}

double RightTriangle::calculateField()
{
    if (!isRightTriangle())
    {
        std::cerr << "Error: That isn't a right triangle!" << std::endl;
        return 0;
    }

    double base{std::max(d_Side1, std::max(d_Side2, d_Side3))};
    double height{(d_Side1 == base) ? d_Side2 : ((d_Side2 == base) ? d_Side3 : d_Side1)};
    d_Field = 0.5 * base * height;
    return d_Field;
}


double RightTriangle::calculateCircuit()
{
    if(isRightTriangle())
    {
        d_Circuit = d_Side1 + d_Side2 + d_Side3;
        return d_Circuit;
    }
    else {
        return 0;
        std::cerr << "Error: This is not a triangle; the sum of two sides is less than the third one!" << std::endl;
    }
}

bool RightTriangle::isRightTriangle() const
{
    return (d_Side1 * d_Side1 + d_Side2 * d_Side2 == d_Side3 * d_Side3) ||
           (d_Side1 * d_Side1 + d_Side3 * d_Side3 == d_Side2 * d_Side2) ||
           (d_Side2 * d_Side2 + d_Side3 * d_Side3 == d_Side1 * d_Side1);
}

