#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "figure.h"

class Rectangle : public Figure {
public:
    Rectangle(
        double d_Side1_
        ,double d_Side2_
        );

    ~Rectangle() override;

    void displaySides() const override;
    void setSides() override;
    double calculateField() override;
    double calculateCircuit() override;

protected:
    double d_Side1{0.0}, d_Side2{0.0};
};

#endif // RECTANGLE_H
