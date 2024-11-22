#include "rectangle.h"
#include <iostream>

Rectangle::Rectangle(
    double side1_,
    double side2_
    ): side1(side1_),
    side2(side2_)
{
    cout << "Utworzono prostokat" << endl;
}

Rectangle::~Rectangle()
{
    cout << "Destruktor prostokata" << endl;
}

void Rectangle::set_sides()
{
    cout << "Podaj 1 bok: " << endl;
    cin >> side1;
    cout << "Podaj 2 bok: " << endl;
    cin >> side2;
}

void Rectangle::display_sides()
{
    cout << "Bok 1: " << side1 << endl;
    cout << "Bok 2: " << side2 << endl;
}

double Rectangle::calculate_field()
{
    field = side1 * side2;
    return field;
}

double Rectangle::calculate_circuit()
{
    circuit = 2 * side1 + 2 * side2;
    return circuit;
}

void Rectangle::display_field_and_circuit()
{
    cout << "Pole: " << field << endl;
    cout << "Obwod: " << circuit << endl;
}


