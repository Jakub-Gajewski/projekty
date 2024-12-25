#include "Motorcycle.h"


Motorcycle::Motorcycle(
    const std::string& sBrand_
    ,const std::string& sModel_
    ,const int iProductionYear_
    ,const int iMileage_
    ,const int iFuelLevelInPercent_
    ,const std::string& sType_
    ,const int iEngineCapacity_
    ) : Vehicle{sBrand_, sModel_, iProductionYear_, iMileage_, iFuelLevelInPercent_}
    ,sType{sType_}
    ,iEngineCapacity{iEngineCapacity_}
{
    std::cout << "Utworzono obiekt dla motocyklu " << sBrand << " " << sModel << ", o pojemnosci silnika " << iEngineCapacity << "cc" << std::endl;
    }

Motorcycle::~Motorcycle()
{
    std::cout << "Destruktor dla motocyklu " << sBrand << " " << sModel << std::endl;
}

void Motorcycle::displayInfo() const
{
    auto fuelLevel = iFuelLevelInPercent;
    auto engineCapacity = iEngineCapacity;

    std::cout << "Marka: " << sBrand << ", Model: " << sModel
              << ", Rok produkcji: " << iProductionYear
              << ", Przebieg: " << iMileage
              << ", Poziom paliwa: " << fuelLevel << "%"
              << ", Typ: " << sType
              << ", Pojemność silnika: " << engineCapacity << "cm^3"
              << std::endl;
}


std::string Motorcycle::getType() const
{
    return sType;
}

int Motorcycle::getEngineCapacity() const
{
    return iEngineCapacity;
}

void Motorcycle::logMaintenance() const
{
    std::cout << "Logowanie serwisowania motocykla: " << sBrand << " " << sModel << std::endl;
}

