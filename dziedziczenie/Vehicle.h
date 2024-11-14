#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>

class Vehicle{
protected:
    std::string brand;
    std::string model;
    int productionYear;

private:
    int mileage;

public:
    Vehicle(
        const std::string& brand_,
        const std::string& model_,
        const int productionYear_,
        const int mileage_
        ) : brand(brand_),
        model(model_),
        productionYear(productionYear_),
        mileage(mileage_)
    {
        std::cout << "Utworzona obiekt dla pojazdu " << brand << " " << model << std::endl;
    }

    void setMileage(const int nMil)
    {
        mileage = nMil;
        std::cout << "Zmieniono przebieg dla " << brand << " " << model << " na: " << nMil << std::endl;
    }

    int getMileage() const
    {
        return mileage;
    }

    std::string getBrand() const
    {
        return brand;
    }

    ~Vehicle()
    {
        std::cout << "Destruktor dla pojazdu " << brand << " " << model << " o przebiegu " << mileage << std::endl;
    }
};

#endif // VEHICLE_H
