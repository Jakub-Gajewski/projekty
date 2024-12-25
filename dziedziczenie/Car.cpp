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
    ) : Vehicle{sBrand_, sModel_, iProductionYear_, iMileage_, iFuelLevelInPercent_}
    ,sDrive{sDrive_}
    ,sBody{sBody_}
    ,iNumberOfGears{iNumberOfGears_}
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

    auto brand = sBrand;
    auto model = sModel;

    std::cout << "Zmieniono ilosc biegow dla " << brand << " " << model
              << " na: " << iNumberOfGears << std::endl;
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
    auto year = iProductionYear;
    auto mileage = iMileage;
    auto drive = sDrive;
    auto body = sBody;

    std::cout << "Samochod: " << sBrand << " " << sModel
              << ", rok: " << year
              << ", przebieg: " << mileage << " km"
              << ", naped: " << drive
              << ", nadwozie: " << body
              << ", liczba biegow: " << iNumberOfGears << std::endl;
}

void Car::logMaintenance() const
{
    std::cout << "Informacje o konserwacji: " << sBrand << " " << sModel << std::endl;
}


void Car::validateNumberOfGears(int num)
{
    auto isInvalid = (num < 1);
    if (isInvalid)
    {
        std::cerr << "Blad: Liczba biegow nie moze byc mniejsza niz 1!" << std::endl;
    }
}

