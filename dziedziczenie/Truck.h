#ifndef TRUCK_H
#define TRUCK_H

#include <iostream>
#include "Car.h"

class Truck : public Car {
public:
    Truck(
        const std::string& sBrand_,
        const std::string& sModel_,
        const int iProductionYear_,
        const int iMileage_,
        const int iFuelLevelInPercent_,
        const std::string& drive_,
        const std::string& sBody_,
        const int iNumberOfGears_,
        const int iNumberOfWheels_,
        const std::string& sCargo_,
        const std::string& sCapacity_
        ) : Car(sBrand_, sModel_, iProductionYear_, iFuelLevelInPercent_, iMileage_, drive_, sBody_, iNumberOfGears_),
        iNumberOfWheels(iNumberOfWheels_),
        sCargo(sCargo_),
        sCapacity(sCapacity_)
    {
        std::cout << "Utworzono obiekt dla ciezarowki " << sBrand << " " << sModel << ", z ladunkiem: " << sCargo << std::endl;
    }

    ~Truck() override
    {
        std::cout << "Destruktor dla ciezarowki " << sBrand << " " << sModel << std::endl;
    }

    void setCargo(const std::string& nsCargo)
    {
        sCargo = nsCargo;
        std::cout << "Zmieniono typ ladunku dla " << sBrand << " " << sModel << " na: " << sCargo << std::endl;
    }

    void setCapacity(const std::string& nsCapacity)
    {
        sCapacity = nsCapacity;
        std::cout << "Zmieniono ladownosc dla " << sBrand << " " << sModel << " na: " << sCapacity << std::endl;
    }

    std::string getCapacity() const
    {
        return sCapacity;
    }

    std::string getCargo() const
    {
        return sCargo;
    }

    void displayInfo() override
    {
        std::cout << "Ciezarowka: " << sBrand << " " << sModel << ", rok: " << iProductionYear
                  << ", przebieg: " << iMileage << " km, naped: " << sDrive << ", nadwozie: " << sBody
                  << ", liczba kol: " << iNumberOfWheels << ", ladunek: " << sCargo << ", ladownosc: " << sCapacity << std::endl;
    }

protected:
    void logTruckDetails() const
    {
        std::cout << "Szczegoly ciezarowki: " << sBrand << " " << sModel
                  << ", ladunek: " << sCargo << ", ladownosc: " << sCapacity << std::endl;
    }

private:
    void logMaintenance() override
    {
        std::cout << "Logowanie serwisowania ciezarowki: " << sBrand << " " << sModel << std::endl;
    }

    void validateCapacity(int sCapacity)
    {
        if (sCapacity < 0)
        {
            std::cerr << "Bląd: ladownosc nie moze byc mniejsza niz 0!" << std::endl;
        }
    }

protected:
    int iNumberOfWheels;
    std::string sCargo;

private:
    std::string sCapacity;
};


#endif // TRUCK_H
