#include "figure.h"
#include <iostream>

Figure::Figure()
{
    std::cout << "Utworzono figure" << std::endl;
}

Figure::~Figure()
{
    std::cout << "Destruktor figury" << std::endl;
}

Figure::getField()
{
    return dField;
}


Figure::getCircuit()
{
    return dCircuit;
}


