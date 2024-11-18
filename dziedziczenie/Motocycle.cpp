#include <iostream>
#include "Motorcycle.h"


    Motorcycle::Motorcycle(
        const std::string& sBrand_,
        const std::string& sModel_,
        const int iProductionYear_,
        const int iMileage_,
        const int iFuelLevelInPercent_,
        const std::string& sType_,
        const int iEngineCapacity_
        ) : Vehicle(sBrand_, sModel_, iProductionYear_, iMileage_, iFuelLevelInPercent_),
        sType(sType_),
        iEngineCapacity(iEngineCapacity_)
    {
        std::cout << "Utworzono obiekt dla motocyklu " << sBrand << " " << sModel << ", o pojemnosci silnika " << iEngineCapacity << "cc" << std::endl;
    }

    Motorcycle::~Motorcycle()
    {
        std::cout << "Destruktor dla motocyklu " << sBrand << " " << sModel << std::endl;
    }

    void Motorcycle::displayInfo()
    {
        std::cout << "Motocykl " << sBrand << " " << sModel << " (" << iProductionYear << "), pojemnosc silnika: "
                  << iEngineCapacity << "cc, przebieg: " << iMileage << " km, poziom paliwa: " << iFuelLevelInPercent << "%" << std::endl;
    }

    std::string Motorcycle::getType() const
    {
        return sType;
    }

    int Motorcycle::getEngineCapacity() const
    {
        return iEngineCapacity;
    }

    void Motorcycle::logMaintenance()
    {
        std::cout << "Logowanie serwisowania motocykla: " << sBrand << " " << sModel << std::endl;
    }

