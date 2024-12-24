#include "Car.h"
#include "Motorcycle.h"
#include "Truck.h"

using namespace std;

int main() {
    Motorcycle M1("Junak", "m15", 50, 2020, 500, "sportowy", 125);
    Car C2("Audi", "rs7", 2021, 28, 30000, "4x4", "coupe", 8);
    Truck T3("Man", "tgx", 2021, 39, 1000000, "4x2", "ciagnik siodlowy", 12, 4, "Dostawa zywnosci do sklepu", "36,4t");
    cout << endl;

    M1.setFuelLevel(90);
    M1.setMileage(600);
    cout << "Motocykl " << M1.getBrand() << " jest to motocykl " << M1.getType() << " o pojemnosci silnika " << M1.getEngineCapacity() << " cc." << endl;
    cout << endl;

    C2.setNumberOfGears(6);
    cout << "Samochod " << C2.getBrand() << " ma naped " << C2.getDrive() << " i nadwozie " << C2.getBody() << "." << endl;
    cout << endl;

    T3.setCargo("Nawozy");
    T3.setCapacity("50t");
    cout << "Ciezarowka " << T3.getBrand() << " ma maksymalny ladunek " << T3.getCapacity() << " i transportuje " << T3.getCargo() << "." << endl;
    cout << endl;

    return 0;
}

