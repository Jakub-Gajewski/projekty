#include "figureFunction.h"
#include "rectangle.h"
#include "rightTriangle.h"
#include "square.h"
#include <iostream>

using namespace std;

int main()
{

    Rectangle rectangle(2.0, 4.0);
    displayFigure(rectangle);

    cout << "Zmienianie bokow prostokata..." << endl;
    displayFigure(rectangle);
    rectangle.setSides();


    RightTriangle triangle(5.0, 12.0, 13.0);
    displayFigure(triangle);

    cout << "Zmienianie bokow trojkata..." << endl;
    displayFigure(rectangle);
    triangle.setSides();

    Square square(4.0);
    displayFigure(square);

    cout << "Zmienianie bokow kwadratu..." << endl;
    displayFigure(square);
    square.setSides();

    return 0;
}
