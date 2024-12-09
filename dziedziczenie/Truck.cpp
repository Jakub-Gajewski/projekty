#include <iostream>
#include "Truck.h"

Truck::Truck(
    const std::string& sBrand_
    ,const std::string& sModel_
    ,const int iProductionYear_
    ,const int iMileage_
    ,const int iFuelLevelInPercent_
    ,const std::string& drive_
    ,const std::string& sBody_
    ,const int iNumberOfGears_
    ,const int iNumberOfWheels_
    ,const std::string& sCargo_
    ,const std::string& sCapacity_
    ) : Car(sBrand_, sModel_, iProductionYear_, iFuelLevelInPercent_, iMileage_, drive_, sBody_, iNumberOfGears_)
    ,iNumberOfWheels(iNumberOfWheels_)
    ,sCargo(sCargo_)
    ,sCapacity(sCapacity_)
{
    std::cout << "Utworzono obiekt dla ciezarowki " << sBrand << " " << sModel << ", z ladunkiem: " << sCargo << std::endl;
}

Truck::~Truck()
{
    std::cout << "Destruktor dla ciezarowki " << sBrand << " " << sModel << std::endl;
}

void Truck::setCargo(const std::string& nsCargo)
{
    sCargo = nsCargo;
    std::cout << "Zmieniono typ ladunku dla " << sBrand << " " << sModel << " na: " << sCargo << std::endl;
}

void Truck::setCapacity(const std::string& nsCapacity)
{
    sCapacity = nsCapacity;
    std::cout << "Zmieniono ladownosc dla " << sBrand << " " << sModel << " na: " << sCapacity << std::endl;
}

std::string Truck::getCapacity() const
{
    return sCapacity;
}

std::string Truck::getCargo() const
{
    return sCargo;
}

void Truck::displayInfo() const
{
    std::cout << "Ciezarowka: " << sBrand << " " << sModel << ", rok: " << iProductionYear
              << ", przebieg: " << iMileage << " km, naped: " << sDrive << ", nadwozie: " << sBody
              << ", liczba kol: " << iNumberOfWheels << ", ladunek: " << sCargo << ", ladownosc: " << sCapacity << std::endl;
}

void Truck::logTruckDetails() const
{
    std::cout << "Szczegoly ciezarowki: " << sBrand << " " << sModel
              << ", ladunek: " << sCargo << ", ladownosc: " << sCapacity << std::endl;
}

void Truck::logMaintenance() const
{
    std::cout << "Logowanie serwisowania ciezarowki: " << sBrand << " " << sModel << std::endl;
}

void Truck::validateCapacity(int sCapacity)
{
    if (sCapacity < 0)
    {
        std::cerr << "Bląd: ladownosc nie moze byc mniejsza niz 0!" << std::endl;
    }
}

