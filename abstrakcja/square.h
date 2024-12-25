#ifndef SQUARE_H
#define SQUARE_H

#include "figure.h"

class Square : public Figure{

public:
    Square(double dSide_);

    ~Square();

    void displaySides() const override;

    void setSides() override;

    double calculateField() override;

    double calculateCircuit() override;

protected:
    double dSide{0.0};
};

#endif // SQUARE_H
