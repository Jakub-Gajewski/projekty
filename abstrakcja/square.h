#ifndef SQUARE_H
#define SQUARE_H

#include <iostream>
#include "figure.h"

class Square : public Figure{

public:
    Square(double side_);

    ~Square();

    void set_sides();

    void display_sides();

    double calculate_field();

    double calculate_circuit();

    void display_field_and_circuit();

protected:
    double side=0.0;
};

#endif // SQUARE_H
