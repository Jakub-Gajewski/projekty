#ifndef TRUCK_H
#define TRUCK_H

#include <iostream>
#include "Car.h"

class Truck : public Car {
public:
    Truck(
        const std::string& brand_,
        const std::string& model_,
        const int productionYear_,
        const int mileage_,
        const int fuelLevelInPercent_,
        const std::string& drive_,
        const std::string& body_,
        const int numberOfGears_,
        const int numberOfWheels_,
        const std::string& cargo_,
        const std::string& capacity_
        ) : Car(brand_, model_, productionYear_, fuelLevelInPercent_, mileage_, drive_, body_, numberOfGears_),
        numberOfWheels(numberOfWheels_),
        cargo(cargo_),
        capacity(capacity_)
    {
        std::cout << "Utworzono obiekt dla ciezarowki " << brand << " " << model << ", z ladunkiem: " << cargo << std::endl;
    }

    ~Truck() override
    {
        std::cout << "Destruktor dla ciezarowki " << brand << " " << model << std::endl;
    }

    void setCargo(const std::string& nCargo)
    {
        cargo = nCargo;
        std::cout << "Zmieniono typ ladunku dla " << brand << " " << model << " na: " << cargo << std::endl;
    }

    void setCapacity(const std::string& nCapacity)
    {
        capacity = nCapacity;
        std::cout << "Zmieniono ladownosc dla " << brand << " " << model << " na: " << capacity << std::endl;
    }

    std::string getCapacity() const
    {
        return capacity;
    }

    std::string getCargo() const
    {
        return cargo;
    }

    void displayInfo() override
    {
        std::cout << "Ciezarowka: " << brand << " " << model << ", rok: " << productionYear
                  << ", przebieg: " << mileage << " km, naped: " << drive << ", nadwozie: " << body
                  << ", liczba kol: " << numberOfWheels << ", ladunek: " << cargo << ", ladownosc: " << capacity << std::endl;
    }

protected:
    void logTruckDetails() const
    {
        std::cout << "Szczegoly ciezarowki: " << brand << " " << model
                  << ", ladunek: " << cargo << ", ladownosc: " << capacity << std::endl;
    }

private:
    void logMaintenance() override
    {
        std::cout << "Logowanie serwisowania ciezarowki: " << brand << " " << model << std::endl;
    }

    void validateCapacity(int capacity)
    {
        if (capacity < 0)
        {
            std::cerr << "Bląd: ladownosc nie moze byc mniejsza niz 0!" << std::endl;
        }
    }

protected:
    int numberOfWheels;
    std::string cargo;

private:
    std::string capacity;
};


#endif // TRUCK_H
