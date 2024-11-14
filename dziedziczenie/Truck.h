#ifndef TRUCK_H
#define TRUCK_H

#include <iostream>
#include "Car.h"

class Truck : public Car {
protected:
    int numberOfWheels;
    std::string cargo;

private:
    std::string capacity;

public:
    Truck(
        const std::string& brand_,
        const std::string& model_,
        const int productionYear_,
        const int mileage_,
        const std::string& drive_,
        const std::string& body_,
        const int numberOfGears_,
        const int numberOfWheels_,
        const std::string& cargo_,
        const std::string& capacity_
        ) : Car(brand_, model_, productionYear_, mileage_, drive_, body_, numberOfGears_),
        numberOfWheels(numberOfWheels_),
        cargo(cargo_),
        capacity(capacity_)
    {
        std::cout << "Utworzono obiekt dla ciężarówki " << brand << " " << model << ", z ładunkiem: " << cargo << std::endl;
    }

    void setCargo(const std::string& nCargo)
    {
        cargo = nCargo;
        std::cout << "Zmieniono typ ładunku dla " << brand << " " << model << " na: " << cargo << std::endl;
    }

    void setCapacity(const std::string& nCapacity)
    {
        capacity = nCapacity;
        std::cout << "Zmieniono ładowność dla " << brand << " " << model << " na: " << capacity << std::endl;
    }

    std::string getCapacity() const
    {
        return capacity;
    }

    ~Truck()
    {
        std::cout << "Destruktor dla ciężarówki " << brand << " " << model << std::endl;
    }
};

#endif // TRUCK_H
