#include "Car.h"
#include "Motorcycle.h"
#include "Truck.h"
#include <iostream>

using namespace std;

int main() {
    Motorcycle motocycle{
         "Junak"
        ,"motocycle5"
        ,50
        ,2020
        ,500
        ,"sport"
        ,125
    };

    Car car{
        "Audi"
        ,"rs7"
        ,2021
        ,30000
        ,60
        ,"4x4"
        ,"coupe"
        ,8
    };

    Truck truck{
        "Man"
        ,"tgx"
        ,2021
        ,100000
        ,39
        ,"4x2"
        ,"Tractor-trailer"
        ,12
        ,4
        ,"Food delivery to the store"
        ,36.4
    };

    cout << endl;

    motocycle.setFuelLevel(90);
    motocycle.setMileage(600);
    cout << "Motocycle " << motocycle.getBrand() << " ,is " << motocycle.getType() << " , with engine capacity " << motocycle.getEngineCapacity() << " cc." << endl;
    cout << endl;

    car.setNumberOfGears(6);
    std::cout << "Car " << car.getBrand() << " has drive type " << car.getDrive() << " and body type " << car.getBody() << "." << std::endl;
    cout << endl;

    truck.setCargo("Fertilizers");
    truck.setCapacity(50);
    std::cout << "The truck " << truck.getBrand() << " has a maximum load capacity of " << truck.getCapacity() << " and transports " << truck.getCargo() << "." << std::endl;
    std::cout << std::endl;


    return 0;
}

