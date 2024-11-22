#include "rightTriangle.h"
#include <iostream>

RightTriangle::Right_triangle(
    double side1_,
    double side2_,
    double side3_
    ) : side1(side1_),
    side2(side2_),
    side3(side3_)
{
    cout << "Utworzono trojkat prostokatny" << endl;
}

~RightTriangle()
{
    cout << "Destruktor krojkata" << endl;
}

void set_sides()
{
    cout << "Podaj 1 bok: " << endl;
    cin >> side1;
    cout << "Podaj 2 bok: " << endl;
    cin >> side2;
    cout << "Podaj 3 bok: " << endl;
    cin >> side3;
}

void display_sides()
{
    cout << "Bok 1: " << side1 << endl;
    cout << "Bok 2: " << side2 << endl;
    cout << "Bok 3: " << side3 << endl;
}

double calculate_field()
{
    int result = isTriangle(side1, side2, side3);

    return result;

    if(result = 0)
    {
        std::cerr << "Blad: To nie jest trójkąt, suma 2 bokow jest mniejsza od trzeciego!" << std::endl;
    }
}

double calculate_circuit()
{
    if(isTriangle(side1, side2, side3) > 0)
    {
        circuit = side1 + side2 + side3;
        return circuit;
    }
    else {
        return 0;
        std::cerr << "Blad: To nie jest trójkąt, suma 2 bokow jest mniejsza od trzeciego!" << std::endl;
    }
}

void display_field_and_circuit()
{
    cout << "Pole: " << field << endl;
    cout << "Obwod: " << circuit << endl;
}

int isTriangle(double side1, double side2, double side3)
{
    if(side1 + side2 > side3 && side1 + side3 > side2 && side3 + side2 > side1)
    {
        if(side1 < side3 && side2 < side3)
        {
            field = (side1 * side2) / 2;
            return field;
        }
        else if(side1 < side2 && side3 < side2)
        {
            field = (side1 * side3) / 2;
            return field;
        }
        else {
            field = (side2 * side3) / 2;
            return field;
        }
    }
    else {
        return 0;
    }
}
