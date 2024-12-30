#include "square.h"
#include <iostream>

Square::Square(
    const double d_Side_
    )
{
    s_figureName = "Square";
    isPositive(d_Side_, d_Side);
    std::cout << "Constructor of a Square" << std::endl;
}

Square::~Square()
{
    std::cout << "Destructor of a Square" << std::endl;
}

void Square::setSides()
{
    std::cout << "Enter side: " << std::endl;
    std::cin >> d_Side;

    isPositive(d_Side, d_Side);
}

void Square::displaySides() const
{
    std::cout << "Side : " << d_Side << std::endl;
}

double Square::calculateField()
{
    if (d_Side <= 0)
    {
        std::cerr << "Erroe: Side must be positive!" << std::endl;
        return 0;
    }
    d_Field = d_Side * d_Side;
    return d_Field;
}

double Square::calculateCircuit()
{
    d_Circuit = 4 * d_Side;
    return d_Circuit;
}



