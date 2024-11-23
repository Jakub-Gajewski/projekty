#include <iostream>
#include <string>
#include "rectangle.h"
#include "rightTriangle.h"
#include "square.h"
#include "figureFunction.h"

using namespace std;

int main()
{

    Rectangle rectangle(2.0, 4.0);
    displayFigure(rectangle);

    cout << "Zmienianie boków prostokąta..." << endl;
    rectangle.setSides();
    displayFigure(rectangle);

    RightTriangle triangle(5.0, 12.0, 13.0);
    displayFigure(triangle);

    triangle.setSides();
    displayFigure(triangle);

    Square square(4.0);
    displayFigure(square);

    cout << "Zmienianie boków kwadratu..." << endl;
    square.setSides();
    displayFigure(square);

    return 0;
}
