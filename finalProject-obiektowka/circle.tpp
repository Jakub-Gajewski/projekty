#include "circle.h"
#include <cmath>

template <typename T>
Circle<T>::Circle(
    const T t_Radius_
    )
{
    if(t_Radius_ >= 0) {
        t_Radius = t_Radius_;
    }
    else {
        std::cerr << "New radius value is smaller than 0, this isn't a circle." << std::endl;
        t_Radius = 0;
    }

    std::cout << "Constructor of a Circle" << std::endl;
}

template <typename T>
Circle<T>::~Circle()
{
    std::cout << "Destructor of a Circle" << std::endl;
}

template <typename T>
T Circle<T>::getRadius() const
{
    return t_Radius;
}

template <typename T>
void Circle<T>::setRadius()
{
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

template <typename T>
T Circle<T>::getField()
{
    return M_PI * t_Radius * t_Radius;
}

template <typename T>
T Circle<T>::getCircuit()
{
    return 2 * M_PI * t_Radius;
}

template class Circle<double>;



