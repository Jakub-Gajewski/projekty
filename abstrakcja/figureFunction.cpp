#include "figureFunction.h"
#include <iostream>

void displayFigure(Figure& figure)
{
    std::cout << figure.getFigureName() << std::endl;
    figure.displaySides();
    std::cout << "Pole: " << figure.calculateField() << std::endl;
    std::cout << "Obwod: " << figure.calculateCircuit() << std::endl;
    std::cout << "---------------------------" << std::endl;
}
