#ifndef SQUARE_H
#define SQUARE_H

#include <iostream>
#include "figure.h"
#include <cmath>

class Square : public Figure{

public:
    Square(double dSide_);

    ~Square();

    void setSides() override;

    void getSides() override;

    double calculateField() override;

    double calculateCircuit() override;

protected:
    double dSide=0.0;
};

#endif // SQUARE_H
