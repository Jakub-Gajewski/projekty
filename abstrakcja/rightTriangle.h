#ifndef RIGHTTRIANGLE_H
#define RIGHTTRIANGLE_H

#include "figure.h"
#include <iostream>

class RightTriangle : public Figure{

public:
    RightTriangle(
        double side1_,
        double side2_,
        double side3_
        );

    ~RightTriangle();

    void set_sides();

    void display_sides();

    double calculate_field();

    double calculate_circuit();

    void display_field_and_circuit();

protected:
    double side1 = 0.0, side2 = 0.0, side3 = 0.0;
};

#endif // RIGHTTRIANGLE_H
