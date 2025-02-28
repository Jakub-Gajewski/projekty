#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>

template <typename T>
class Circle {
public:
    Circle(
        const T t_Radius_
        );

    ~Circle();

    T getRadius() const;
    void setRadius();
    T getField();
    T getCircuit();

private:
    T t_Radius;
};

#include "circle.tpp"

#endif // CIRCLE_H
