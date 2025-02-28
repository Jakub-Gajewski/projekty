#include "rectangle.h"
#include <iostream>

Rectangle::Rectangle(
    double d_Side1_
    ,double d_Side2_
    )
{
    s_figureName = "Rectangle";
    isPositive(d_Side1_, d_Side1);
    isPositive(d_Side2_, d_Side2);
    std::cout << "Constructor of a Rectangle" << std::endl;
}


Rectangle::~Rectangle()
{
    std::cout << "Destructor of a Rectangle" << std::endl;
}

void Rectangle::setSides()
{
    double side;

    std::cout << "Enter 1 side: ";
    std::cin >> side;
    std::cout << std::endl;
    isPositive(side, d_Side1);

    std::cout << "Enter 2 side: ";
    std::cin >> side;
    std::cout << std::endl;
    isPositive(side, d_Side2);
}

void Rectangle::displaySides() const
{
    std::cout << "Enter 1: " << d_Side1 << std::endl;
    std::cout << "Enter 2: " << d_Side2 << std::endl;
}

double Rectangle::calculateField()
{
    if (d_Side1 <= 0 || d_Side2 <= 0)
    {
        std::cerr << "Error: Side must be positive!" << std::endl;
        return 0;
    }
    d_Field = d_Side1 * d_Side2;
    return d_Field;
}

double Rectangle::calculateCircuit()
{
    if (d_Side1 <= 0 || d_Side2 <= 0)
    {
        std::cerr << "Error: Side must be positive!" << std::endl;
        return 0;
    }
    d_Circuit = 2 * (d_Side1 + d_Side2);
    return d_Circuit;
}

