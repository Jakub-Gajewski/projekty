#include "circle.h"
#include "figurefunction.h"
#include "rectangle.h"
#include "righttriangle.h"
#include <iostream>

int main() {
    // Tworzenie trójkąta prostokątnego
    RightTriangle triangle1(3, 4, 5);
    RightTriangle triangle2(6, 8, 10);

    // Wyświetlanie informacji o trójkątach
    std::cout << "Triangle 1:" << std::endl;
    displayFigure(triangle1);

    std::cout << "Triangle 2:" << std::endl;
    displayFigure(triangle2);

    // Przeciążenie operatora ==
    std::cout << "Triangle 1 == Triangle 2? " << (triangle1 == triangle2 ? "Yes" : "No") << std::endl;

    // Przeciążenie operatora +
    RightTriangle triangle3 = triangle1 + triangle2;
    std::cout << "Triangle 3 (sum of Triangle 1 and Triangle 2)::" << std::endl;
    displayFigure(triangle3);

    // Tworzenie prostokąta
    Rectangle rectangle(5, 10);
    std::cout << "Rectangle:" << std::endl;
    displayFigure(rectangle);

    // Tworzenie okręgu (użycie szablonu)
    Circle<double> circle(7.0);

    std::cout << "Circle:" << std::endl;
    std::cout << "Radius: " << circle.getRadius() << std::endl;
    std::cout << "Field: " << circle.getField() << std::endl;
    std::cout << "Circuit: " << circle.getCircuit() << std::endl;

    return 0;
}
