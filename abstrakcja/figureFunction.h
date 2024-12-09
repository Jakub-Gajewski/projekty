#ifndef FIGUREUTILS_H
#define FIGUREUTILS_H

#include <iostream>
#include "figure.h"

void displayFigure(Figure& figure)
{
    std::cout << figure.getFigureName() << std::endl;
    figure.displaySides();
    std::cout << "Pole: " << figure.calculateField() << std::endl;
    std::cout << "Obwod: " << figure.calculateCircuit() << std::endl;
    std::cout << "---------------------------" << std::endl;
}

#endif // FIGUREUTILS_H
