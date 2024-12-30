#include "figureFunction.h"
#include "rectangle.h"
#include "rightTriangle.h"
#include "square.h"
#include <iostream>

using namespace std;

int main()
{

    Rectangle rectangle{2.0, 4.0};
    displayFigure(rectangle);

    cout << "Changing the sides of the rectangle..." << endl;
    rectangle.setSides();
    displayFigure(rectangle);

    RightTriangle triangle{5.0, 12.0, 13.0};
    displayFigure(triangle);

    cout << "Changing the sides of the triangle..." << endl;
    triangle.setSides();
    displayFigure(triangle);

    Square square{4.0};
    displayFigure(square);

    cout << "Changing the sides of the square..." << endl;
    square.setSides();
    displayFigure(square);

    return 0;
}
