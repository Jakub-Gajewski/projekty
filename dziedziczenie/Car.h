#ifndef CAR_H
#define CAR_H

#include <iostream>
#include "Vehicle.h"

class Car : public Vehicle{
protected:
    std::string drive;
    std::string body;

private:
    int numberOfGears;

public:
    Car(
        const std::string& brand_,
        const std::string& model_,
        const int productionYear_,
        const int mileage_,
        const std::string& drive_,
        const std::string& body_,
        const int numberOfGears_
        ) : Vehicle(brand_, model_, productionYear_, mileage_),
        drive(drive_),
        body(body_),
        numberOfGears(numberOfGears_)
    {
        std::cout << "Utworzona obiekt dla samochodu " << brand << " " << model << ", o nadwoziu " << body << std::endl;
    }

    void setNumberOfGears(const int nNum)
    {
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

    ~Car()
    {
        std::cout << "Destruktor dla samochodu " << brand << " " << model << std::endl;
    }
};

#endif // CAR_H
