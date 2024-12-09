#include <iostream>
#include "Car.h"

Car::Car(
    const std::string& sBrand_
    ,const std::string& sModel_
    ,const int iProductionYear_
    ,const int iMileage_
    ,const int iFuelLevelInPercent_
    ,const std::string& sDrive_
    ,const std::string& sBody_
    ,const int iNumberOfGears_
    ) : Vehicle(sBrand_, sModel_, iProductionYear_, iMileage_, iFuelLevelInPercent_)
    ,sDrive(sDrive_)
    ,sBody(sBody_)
    ,iNumberOfGears(iNumberOfGears_)
{
    std::cout << "Utworzona obiekt dla samochodu " << sBrand << " " << sModel << ", o nadwoziu " << sBody << std::endl;
}

Car::~Car()
{
    std::cout << "Destruktor dla samochodu " << sBrand << " " << sModel << std::endl;
}

void Car::setNumberOfGears(const int nNum)
{
    validateNumberOfGears(nNum);
    iNumberOfGears = nNum;
    std::cout << "Zmieniono ilosc biegow dla " << sBrand << " " << sModel << " na: " << iNumberOfGears << std::endl;
}

std::string Car::getDrive() const
{
    return sDrive;
}

std::string Car::getBody() const
{
    return sBody;
}

void Car::displayInfo() const
{
    std::cout << "Samochod: " << sBrand << " " << sModel << ", rok: " << iProductionYear << ", przebieg: " << iMileage << " km, naped: " << sDrive << ", nadwozie: " << sBody << ", liczba biegow: " << iNumberOfGears << std::endl;
}

void Car::logMaintenance() const
{
    std::cout << "Informacje o konserwacji: " << sBrand << " " << sModel << std::endl;
}


void Car::validateNumberOfGears(int num)
{
    if (num < 1)
    {
        std::cerr << "Blad: Liczba biegow nie moze byc mniejsza niz 1!" << std::endl;
    }
}
