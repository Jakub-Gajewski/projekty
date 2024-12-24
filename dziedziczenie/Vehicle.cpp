#include <iostream>
#include "Vehicle.h"

Vehicle::Vehicle(
    const std::string& sBrand_
    ,const std::string& sModel_
    ,const int iProductionYear_
    ,const int iMileage_
    ,const int iFuelLevelInPercent_
    ) : sBrand(sBrand_)
    ,sModel(sModel_)
    ,iProductionYear(iProductionYear_)
    ,iMileage(iMileage_)
    ,iFuelLevelInPercent(iFuelLevelInPercent_)
{
    std::cout << "Utworzony obiekt dla pojazdu" << std::endl;
}

Vehicle::~Vehicle()
{
    std::cout << "Destruktor dla pojazdu" << std::endl;
}

void Vehicle::setMileage(const int nMil)
{
    validateMileage(nMil);
}

int Vehicle::getMileage() const
{
    return iMileage;
}

std::string Vehicle::getBrand() const
{
    return sBrand;
}

void Vehicle::setFuelLevel(int newFuelLevel)
{
    validateFuelLevel(newFuelLevel);
    iFuelLevelInPercent = newFuelLevel;
    std::cout << "Poziom paliwa w pojezdzie " << sBrand << " " << sModel << " zmieniony na: " << iFuelLevelInPercent << "%" << std::endl;
}

void Vehicle::validateFuelLevel(int newFuelLevel)
{
    auto isOutOfRange = (newFuelLevel < 0 || newFuelLevel > (100));
    if (isOutOfRange)
    {
        std::cerr << "Blad: Poziom paliwa musi byc w zakresie 0-100%" << std::endl;
    }
}

void Vehicle::validateMileage(int newiMileage)
{
    auto isInvalidMileage = (newiMileage < iMileage);
    if (isInvalidMileage)
    {
        std::cerr << "Blad: Nowy przebieg nie moze byc mniejszy niz obecny!" << std::endl;
    }else
    {
        iMileage = newiMileage;
        std::cout << "Zmieniono przebieg dla " << sBrand << " " << sModel << " na: " << newiMileage << std::endl;
    }
}
