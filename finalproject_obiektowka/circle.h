#ifndef CIRCLE_H
#define CIRCLE_H

#include <cmath>
#include <iostream>

template <typename T>
class Circle {
public:
    Circle(const T t_Radius_) {
        if(t_Radius_ >= 0) {
            t_Radius = t_Radius_;
        }
        else {
            std::cerr << "New radius value is smaller than 0, this isn't a circle." << std::endl;
            t_Radius = 0;
        }

        std::cout << "Constructor of a Circle" << std::endl;
    }

    ~Circle() {
        std::cout << "Destructor of a Circle" << std::endl;
    }

    T getRadius() const {
        return t_Radius;
    }

    void setRadius() {
        T newRadius;
        std::cout << "Enter new radius: ";
        std::cin >> newRadius;

        if(newRadius >= 0) {
            t_Radius = newRadius;
        }
        else {
            std::cerr << "New radius value is smaller than 0, this isn't a circle." << std::endl;
        }
    }

    T getField() {
        return M_PI * t_Radius * t_Radius;
    }

    T getCircuit() {
        return 2 * M_PI * t_Radius;
    }

private:
    T t_Radius;
};

#endif // CIRCLE_H
