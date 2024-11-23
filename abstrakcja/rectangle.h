#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "figure.h"
#include <iostream>

class Rectangle : public Figure{

public:
    Rectangle(
        const double dSide1_,
        const double dSide2_
        );

    ~Rectangle();

    void setSides() override;

    void displaySides() override;

    double calculateField() override;

    double calculateCircuit() override;

    void displayFieldAndCircuit() override;

protected:
    double dSide1 = 0.0, dSide2 = 0.0;
};

#endif // RECTANGLE_H
