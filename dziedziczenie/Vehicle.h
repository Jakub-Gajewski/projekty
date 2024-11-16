#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>

class Vehicle {
public:
    Vehicle()
    {
        std::cout << "Utworzony obiekt dla pojazdu" << std::endl;
    }

    virtual ~Vehicle()
    {
        std::cout << "Destruktor dla pojazdu" << std::endl;
    }

    virtual void displayInfo() = 0;

    void setMileage(const int nMil)
    {
        validateMileage(nMil);
    }

    int getMileage() const
    {
        return mileage;
    }

    std::string getBrand() const
    {
        return brand;
    }

    void setFuelLevel(int newFuelLevel)
    {
        validateFuelLevel(newFuelLevel);
        fuelLevelInPercent = newFuelLevel;
        std::cout << "Poziom paliwa w pojezdzie " << brand << " " << model << " zmieniony na: " << fuelLevelInPercent << "%" << std::endl;
    }

protected:
    virtual void logMaintenance() = 0; // Czemu to jest czysto wirtualne, zalezy od implementacji

    void validateFuelLevel(int newFuelLevel)
    {
        if (newFuelLevel < 0 || newFuelLevel > 100)
        {
            std::cerr << "Blad: Poziom paliwa musi byc w zakresie 0-100%" << std::endl;
        }
    }

private:
    void validateMileage(int newMileage)
    {
        if (newMileage < mileage)
        {
            std::cerr << "Blad: Nowy przebieg nie moze byc mniejszy niz obecny!" << std::endl;
        }else
        {
            mileage = newMileage;
            std::cout << "Zmieniono przebieg dla " << brand << " " << model << " na: " << newMileage << std::endl;
        }
    }

protected:
    std::string brand;
    std::string model;
    int productionYear;
    int mileage;
    int fuelLevelInPercent;
};

#endif // VEHICLE_H
