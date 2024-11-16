#ifndef CAR_H
#define CAR_H

#include <iostream>
#include "Vehicle.h"

class Car : public Vehicle {
public:
    Car(
        const std::string& brand_,
        const std::string& model_,
        const int productionYear_,
        const int mileage_,
        const int fuelLevelInPercent_,
        const std::string& drive_,
        const std::string& body_,
        const int numberOfGears_
        ) : Vehicle(),
        drive(drive_),
        body(body_),
        numberOfGears(numberOfGears_)
    {
        brand = brand_;
        model = model_;
        productionYear = productionYear_;
        mileage = mileage_;
        fuelLevelInPercent = fuelLevelInPercent_;

        std::cout << "Utworzona obiekt dla samochodu " << brand << " " << model << ", o nadwoziu " << body << std::endl;
    }

    ~Car() override
    {
        std::cout << "Destruktor dla samochodu " << brand << " " << model << std::endl;
    }

    void setNumberOfGears(const int nNum)
    {
        validateNumberOfGears(nNum);
        numberOfGears = nNum;
        std::cout << "Zmieniono ilosc biegow dla " << brand << " " << model << " na: " << numberOfGears << std::endl;
    }

    std::string getDrive() const
    {
        return drive;
    }

    std::string getBody() const
    {
        return body;
    }

    void displayInfo() override
    {
        std::cout << "Samochod: " << brand << " " << model << ", rok: " << productionYear << ", przebieg: " << mileage << " km, naped: " << drive << ", nadwozie: " << body << ", liczba biegow: " << numberOfGears << std::endl;
    }

protected:

    void logMaintenance() override
    {
        std::cout << "Informacje o konserwacji: " << brand << " " << model << std::endl;
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
    std::string drive;
    std::string body;

private:
    int numberOfGears;
};


#endif // CAR_H
