#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "figure.h"

class Rectangle : public Figure {
public:
    Rectangle(double dSide1_, double dSide2_);

    ~Rectangle() override;

    void displaySides() const override;

    void setSides() override;

    double calculateField() override;

    double calculateCircuit() override;
};

#endif // RECTANGLE_H
