#include <iostream>
#include <string>
#include <cmath>
#include "rectangle.h"
#include "rightTriangle.h"
#include "square.h"

using namespace std;

int main()
{
    Rectangle t1(2.0, 4.0);
    RightTriangle g2(5, 12, 14);

    t1.display_sides();
    cout << "Zmien dlugosci bokow" << endl;
    t1.set_sides();
    t1.calculate_circuit();
    t1.display_field_and_circuit();
    cout << endl;
    g2.display_sides();
    g2.calculate_field();
    g2.display_field_and_circuit();
    return 0;
}
