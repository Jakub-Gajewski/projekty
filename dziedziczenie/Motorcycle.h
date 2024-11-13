#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H

#include "Vehicle.h"

class Motorcycle : public Vehicle{
protected:
    std::string type;

private:
    int engineCapacity;

public:
    Motorcycle(std::string brand_, std::string model_, int productionYear_, int mileage_, std::string type_, int engineCapacity_)
        : Vehicle(brand_, model_, productionYear_, mileage_),
        type(type_),
        engineCapacity(engineCapacity_){
        std::cout << "Utworzona obiekt dla motocyklu " << brand << " " << model << ", o pojemnosci silnika " << engineCapacity << "cc" << std::endl;
    }

    void setCapacity(int nCap){
        engineCapacity = nCap;
        std::cout << "Zmieniono pojemnosc silnika dla " << brand << " " << model << " na: " << engineCapacity << "cc" << std::endl;
    }

    std::string setType(){
        return type;
    }

    ~Motorcycle(){
        std::cout << "Destruktor dla motocyklu " << brand << " " << model << std::endl;
    }
};

#endif // MOTORCYCLE_H
