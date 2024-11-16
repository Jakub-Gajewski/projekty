#ifndef CAR_H
#define CAR_H

#include <iostream>
#include "Vehicle.h"

class Car : public Vehicle {
public:
    Car(
        const std::string& sBrand_,
        const std::string& sModel_,
        const int iProductionYear_,
        const int iMileage_,
        const int iFuelLevelInPercent_,
        const std::string& sDrive_,
        const std::string& sBody_,
        const int iNumberOfGears_
        ) : Vehicle(),
        sDrive(sDrive_),
        sBody(sBody_),
        iNumberOfGears(iNumberOfGears_)
    {
        sBrand = sBrand_;
        sModel = sModel_;
        iProductionYear = iProductionYear_;
        iMileage = iMileage_;
        iFuelLevelInPercent = iFuelLevelInPercent_;

        std::cout << "Utworzona obiekt dla samochodu " << sBrand << " " << sModel << ", o nadwoziu " << sBody << std::endl;
    }

    ~Car() override
    {
        std::cout << "Destruktor dla samochodu " << sBrand << " " << sModel << std::endl;
    }

    void setNumberOfGears(const int nNum)
    {
        validateNumberOfGears(nNum);
        iNumberOfGears = nNum;
        std::cout << "Zmieniono ilosc biegow dla " << sBrand << " " << sModel << " na: " << iNumberOfGears << std::endl;
    }

    std::string getDrive() const
    {
        return sDrive;
    }

    std::string getBody() const
    {
        return sBody;
    }

    void displayInfo() override
    {
        std::cout << "Samochod: " << sBrand << " " << sModel << ", rok: " << iProductionYear << ", przebieg: " << iMileage << " km, naped: " << sDrive << ", nadwozie: " << sBody << ", liczba biegow: " << iNumberOfGears << std::endl;
    }

protected:

    void logMaintenance() override
    {
        std::cout << "Informacje o konserwacji: " << sBrand << " " << sModel << std::endl;
    }

private:

    void validateNumberOfGears(int num)
    {
        if (num < 1)
        {
            std::cerr << "Blad: Liczba biegow nie moze byc mniejsza niz 1!" << std::endl;
        }
    }

protected:
    std::string sDrive;
    std::string sBody;

private:
    int iNumberOfGears;
};


#endif // CAR_H
