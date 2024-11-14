#include <iostream>
#include "Motorcycle.h"
#include "Car.h"
#include "Truck.h"

using namespace std;

int main()
{
    Motorcycle M1("Junak", "m15", 2020, 500, "sportowy", 125);
    Car C2("Audi", "rs7", 2021, 30000, "4x4", "coupe", 8);
    Truck T3("Man", "tgx", 2021, 1000000, "4x2", "ciagnik siodlowy", 12, 4, "Dostawa żywności do sklepu", "36,4t");
    cout << endl;

    M1.setCapacity(500);
    cout << "Motocykl " << M1.getBrand() << " jest to motocykl " << M1.getType()<< endl;
    cout << endl;

    C2.setNumberOfGears(6);
    cout << "Samochod " << C2.getBrand() << " ma naped " << C2.getDrive() << endl;
    cout << endl;

    T3.setCargo("Nawozy");
    cout << "Tir " << T3.getBrand() << " ma maksymalny zaladunek " << T3.getCapacity() << endl;
    cout << endl;

    return 0;
}
