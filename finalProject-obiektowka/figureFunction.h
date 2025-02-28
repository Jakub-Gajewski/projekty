#ifndef FIGUREUTILS_H
#define FIGUREUTILS_H

#include "figure.h"
#include <iostream>

void displayFigure(Figure& figure)
{
    std::cout << figure.getFigureName() << std::endl;
    figure.displaySides();
    std::cout << "Field: " << figure.calculateField() << std::endl;
    std::cout << "Circuit: " << figure.calculateCircuit() << std::endl;
    std::cout << "---------------------------" << std::endl;
}

#endif // FIGUREUTILS_H
