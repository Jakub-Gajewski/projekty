#include "figure.h"

Figure::Figure()
{
    std::cout << "Utworzono figure" << std::endl;
}

Figure::~Figure()
{
    std::cout << "Destruktor figury" << std::endl;
}

double Figure::getField() const
{
    return dField;
}

double Figure::getCircuit() const
{
    return dCircuit;
}

std::string Figure::getFigureName() const
{
    return figureName;
}

void Figure::isPositive(double number, double& variableName)
{
    if (number > 0)
    {
        variableName = number;
    }
    else
    {
        variableName = 1.0;
        std::cerr << "Bład: Wartość musi być dodatnia!" << std::endl;
    }
}





