#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "figure.h"
#include <iostream>

class Rectangle : public Figure {
public:
    Rectangle(double dSide1_, double dSide2_);

    ~Rectangle() override;

    void setSides() override;

    void displaySides() const override;

    double calculateField() override;

    double calculateCircuit() override;

protected:
    double dSide1 = 0.0, dSide2 = 0.0;
};

#endif // RECTANGLE_H
