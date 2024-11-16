#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H

#include <iostream>
#include "Vehicle.h"

class Motorcycle : public Vehicle {
public:
    Motorcycle(
        const std::string& brand_,
        const std::string& model_,
        const int productionYear_,
        const int mileage_,
        const int fuelLevelInPercent_,
        const std::string& type_,
        const int engineCapacity_
        ) : Vehicle(),
        type(type_),
        engineCapacity(engineCapacity_)
    {
        brand = brand_;
        model = model_;
        productionYear = productionYear_;
        mileage = mileage_;
        fuelLevelInPercent = fuelLevelInPercent_;

        std::cout << "Utworzono obiekt dla motocyklu " << brand << " " << model << ", o pojemnosci silnika " << engineCapacity << "cc" << std::endl;
    }

    ~Motorcycle()
    {
        std::cout << "Destruktor dla motocyklu " << brand << " " << model << std::endl;
    }

    void displayInfo() override
    {
        std::cout << "Motocykl " << brand << " " << model << " (" << productionYear << "), pojemnosc silnika: "
                  << engineCapacity << "cc, przebieg: " << mileage << " km, poziom paliwa: " << fuelLevelInPercent << "%" << std::endl;
    }

    std::string getType() const
    {
        return type;
    }

    int getEngineCapacity() const
    {
        return engineCapacity;
    }

protected:
    void logMaintenance() override
    {
        std::cout << "Logowanie serwisowania motocykla: " << brand << " " << model << std::endl;
    }


protected:
    std::string type;

private:
    int engineCapacity;
};

#endif // MOTORCYCLE_H
