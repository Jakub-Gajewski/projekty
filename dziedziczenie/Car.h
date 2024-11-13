#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle{
protected:
    std::string drive;
    std::string body;

private:
    int numberOfGears;

public:
    Car(std::string brand_, std::string model_, int productionYear_, int mileage_, std::string drive_, std::string body_, int numberOfGears_)
        : Vehicle(brand_, model_, productionYear_, mileage_),
        drive(drive_),
        body(body_),
        numberOfGears(numberOfGears_){
        std::cout << "Utworzona obiekt dla samochodu " << brand << " " << model << ", o nadwoziu " << body << std::endl;
    }

    void setNumberOfGears(int nNum){
        numberOfGears = nNum;
        std::cout << "Zmieniono ilosc biegow dla " << brand << " " << model << " na: " << numberOfGears << std::endl;
    }

    std::string setDrive(){
        return drive;
    }

    std::string setBody(){
        return body;
    }

    ~Car(){
        std::cout << "Destruktor dla samochodu " << brand << " " << model << std::endl;
    }
};

#endif // CAR_H
