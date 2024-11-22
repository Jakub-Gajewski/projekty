#include "square.h"
#include <iostream>

Square::Square(
    double side_
    ) : side(side_)
{
    cout << "Utworzono kwadrat" << endl;
}

Square::~Square()
{
    cout << "Destruktor kwadratu" << endl;
}

void Square::set_sides()
{
    cout << "Podaj bok: " << endl;
    cin >> side;
}

void Square::display_sides()
{
    cout << "Bok : " << side << endl;
}

double Square::calculate_field()
{
    field = pow(side, 2);
    return field;
}

double Square::calculate_circuit()
{
    circuit = 4 * side;
    return circuit;
}

void Square::display_field_and_circuit()
{
    cout << "Pole: " << field << endl;
    cout << "Obwod: " << circuit << endl;
}


