#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H

#include <iostream>
#include "Vehicle.h"

class Motorcycle : public Vehicle {
public:
    Motorcycle(
        const std::string& sBrand_,
        const std::string& sModel_,
        const int iProductionYear_,
        const int iMileage_,
        const int iFuelLevelInPercent_,
        const std::string& sType_,
        const int iEngineCapacity_
        ) : Vehicle(),
        sType(sType_),
        iEngineCapacity(iEngineCapacity_)
    {
        sBrand = sBrand_;
        sModel = sModel_;
        iProductionYear = iProductionYear_;
        iMileage = iMileage_;
        iFuelLevelInPercent = iFuelLevelInPercent_;

        std::cout << "Utworzono obiekt dla motocyklu " << sBrand << " " << sModel << ", o pojemnosci silnika " << iEngineCapacity << "cc" << std::endl;
    }

    ~Motorcycle()
    {
        std::cout << "Destruktor dla motocyklu " << sBrand << " " << sModel << std::endl;
    }

    void displayInfo() override
    {
        std::cout << "Motocykl " << sBrand << " " << sModel << " (" << iProductionYear << "), pojemnosc silnika: "
                  << iEngineCapacity << "cc, przebieg: " << iMileage << " km, poziom paliwa: " << iFuelLevelInPercent << "%" << std::endl;
    }

    std::string getType() const
    {
        return sType;
    }

    int getEngineCapacity() const
    {
        return iEngineCapacity;
    }

protected:
    void logMaintenance() override
    {
        std::cout << "Logowanie serwisowania motocykla: " << sBrand << " " << sModel << std::endl;
    }


protected:
    std::string sType;

private:
    int iEngineCapacity;
};

#endif // MOTORCYCLE_H
