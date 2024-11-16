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

    int getiMileage() const
    {
        return iMileage;
    }

    std::string getBrand() const
    {
        return sBrand;
    }

    void setFuelLevel(int newFuelLevel)
    {
        validateFuelLevel(newFuelLevel);
        iFuelLevelInPercent = newFuelLevel;
        std::cout << "Poziom paliwa w pojezdzie " << sBrand << " " << sModel << " zmieniony na: " << iFuelLevelInPercent << "%" << std::endl;
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
    void validateMileage(int newiMileage)
    {
        if (newiMileage < iMileage)
        {
            std::cerr << "Blad: Nowy przebieg nie moze byc mniejszy niz obecny!" << std::endl;
        }else
        {
            iMileage = newiMileage;
            std::cout << "Zmieniono przebieg dla " << sBrand << " " << sModel << " na: " << newiMileage << std::endl;
        }
    }

protected:
    std::string sBrand;
    std::string sModel;
    int iProductionYear;
    int iMileage;
    int iFuelLevelInPercent;
};

#endif // VEHICLE_H
