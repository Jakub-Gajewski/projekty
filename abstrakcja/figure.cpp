#include "figure.h"

Figure::Figure()
{
    std::cout << "Utworzono figure" << std::endl;
}

Figure::~Figure()
{
    std::cout << "Destruktor figury" << std::endl;
}

auto Figure::getField() const -> double
{
    return dField;
}

auto Figure::getCircuit() const -> double
{
    return dCircuit;
}

auto Figure::getFigureName() const -> std::string
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
        throw std::invalid_argument("Błąd: Wartość musi być dodatnia!");
    }
}





