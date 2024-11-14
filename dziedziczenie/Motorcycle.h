#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H

#include <iostream>
#include "Vehicle.h"

class Motorcycle : public Vehicle{
protected:
    std::string type;

private:
    int engineCapacity;

public:
    Motorcycle(
        const std::string& brand_,
        const std::string& model_,
        const int productionYear_,
        const int mileage_,
        const std::string& type_,
        const int engineCapacity_
        ) : Vehicle(brand_, model_, productionYear_, mileage_),
        type(type_),
        engineCapacity(engineCapacity_)
    {
        std::cout << "Utworzona obiekt dla motocyklu " << brand << " " << model << ", o pojemnosci silnika " << engineCapacity << "cc" << std::endl;
    }

    void setCapacity(const int nCap)
    {
        engineCapacity = nCap;
        std::cout << "Zmieniono pojemnosc silnika dla " << brand << " " << model << " na: " << engineCapacity << "cc" << std::endl;
    }

    std::string getType() const
    {
        return type;
    }

    ~Motorcycle()
    {
        std::cout << "Destruktor dla motocyklu " << brand << " " << model << std::endl;
    }
};

#endif // MOTORCYCLE_H
