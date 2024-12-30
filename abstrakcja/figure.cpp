#include "figure.h"
#include <iostream>

Figure::Figure()
{
    std::cout << "Constructor of a figure" << std::endl;
}

Figure::~Figure()
{
    std::cout << "Destructor of a figure" << std::endl;
}

double Figure::getField() const
{
    return d_Field;
}

double Figure::getCircuit() const
{
    return d_Circuit;
}

std::string Figure::getFigureName() const
{
    return s_figureName;
}

void Figure::isPositive(double d_number, double& d_variableName)
{
    if (d_number > 0)
    {
        d_variableName = d_number;
    }
    else
    {
        d_variableName = 1.0;
        std::cerr << "Error: The value must be positive!" << std::endl;
    }
}





