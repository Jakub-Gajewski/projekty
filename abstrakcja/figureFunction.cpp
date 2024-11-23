#include "figureFunction.h".h"
#include <iostream>

void displayFigure(Figure& figure)
{
    figure.figureName;
    figure.displaySides();
    std::cout << "Pole: " << figure.calculateField() << std::endl;
    std::cout << "Obwód: " << figure.calculateCircuit() << std::endl;
    std::cout << "---------------------------" << std::endl;
}
