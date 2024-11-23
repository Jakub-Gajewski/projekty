#ifndef SQUARE_H
#define SQUARE_H

#include <iostream>
#include "figure.h"

class Square : public Figure{

public:
    Square(double dSide_);

    ~Square();

    void setSides() override;

    void displaySides() override;

    double calculateField() override;

    double calculateCircuit() override;

protected:
    double dSide=0.0;
};

#endif // SQUARE_H
