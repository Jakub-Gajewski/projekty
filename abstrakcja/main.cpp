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

    t1.displaySides();
    cout << "Zmien dlugosci bokow" << endl;
    t1.setSides();
    t1.calculateCircuit();
    t1.displayFieldAndCircuit();
    cout << endl;
    g2.displaySides();
    g2.calculateField();
    g2.displayFieldAndCircuit();
    return 0;
}
