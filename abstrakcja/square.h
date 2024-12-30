#ifndef SQUARE_H
#define SQUARE_H

#include "figure.h"
#include <string>

class Square : public Figure{

public:
    Square(double d_Side_);

    ~Square();

    void displaySides() const override;
    void setSides() override;
    double calculateField() override;
    double calculateCircuit() override;

protected:
    double d_Side{0.0};
};

#endif // SQUARE_H
