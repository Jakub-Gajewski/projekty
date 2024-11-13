#ifndef TRUCK_H
#define TRUCK_H

#include "Car.h"

class Truck : public Car{
protected:
    int numberOfWheels;
    std::string cargo;

private:
    std::string capacity;

public:
    Truck(std::string brand_, std::string model_, int productionYear_, int mileage_, std::string drive_, std::string body_, int numberOfGears_, int numberOfWheels_,  std::string cargo_, std::string capacity_)
        : Car(brand_, model_, productionYear_, mileage_, drive_, body_, numberOfGears_),
        numberOfWheels(numberOfWheels_),
        cargo(cargo_),
        capacity(capacity_){
        std::cout << "Utworzona obiekt dla ciezarowki " << brand << " " << model << ", z zaladunkiem: " << cargo << std::endl;
    }

    void set_cargo(std::string nCargo){
        cargo = nCargo;
        std::cout << "Zmieniono typ zaladunku dla " << brand << " " << model << " na: " << cargo << std::endl;
    }

    void set_capacity(std::string nCapacity){
        capacity = nCapacity;
        std::cout << "Zmieniono ladownosc dla " << brand << " " << model << " na: " << cargo << std::endl;
    }

    std::string setCapacity(){
        return capacity;
    }

    ~Truck(){
        std::cout << "Destruktor dla ciezarowki " << brand << " " << model << std::endl;
    }
};

#endif // TRUCK_H
