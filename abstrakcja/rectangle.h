#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "figure.h"
#include <iostream>

class Rectangle : public Figure{

public:
    Rectangle(
        double side1_,
        double side2_
        );

    ~Rectangle();

    void set_sides();

    void display_sides();

    double calculate_field();

    double calculate_circuit();

    void display_field_and_circuit();

protected:
    double side1 = 0.0, side2 = 0.0;
};

#endif // RECTANGLE_H
