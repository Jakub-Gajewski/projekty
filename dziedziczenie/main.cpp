#include <iostream>

using namespace std;

class Vehicle{
protected:
    string brand;
    string model;
    int production_year;
private:
    int mileage;
public:
    Vehicle(string brand_, string model_, int production_year_, int mileage_)
        : brand(brand_),
        model(model_),
        production_year(production_year_),
        mileage(mileage_) {
        cout << "Utworzona obiekt dla pojazdu " << brand << " " << model << endl;
    }

    void change_mileage(int n_mil){
        mileage = n_mil;
        cout << "Zmieniono przebieg dla " << brand << " " << model << " na: " << n_mil << endl;
    }

    int return_mileage(){
        return mileage;
    }

    string return_brand(){
        return brand;
    }

    ~Vehicle(){
        cout << "Destruktor dla pojazdu " << brand << " " << model << " o przebiegu " << mileage << endl;
    }
};

class Motorcycle : public Vehicle{
protected:
    string type;

private:
    int engine_capacity;

public:
    Motorcycle(string brand_, string model_, int production_year_, int mileage_, string typ_, int engine_capacity_)
        : Vehicle(brand_, model_, production_year_, mileage_),
        type(typ_),
        engine_capacity(engine_capacity_){
        cout << "Utworzona obiekt dla motocyklu " << brand << " " << model << ", o pojemnosci silnika " << engine_capacity << "cc" << endl;
    }

    void change_capacity(int n_cap){
        engine_capacity = n_cap;
        cout << "Zmieniono pojemnosc silnika dla " << brand << " " << model << " na: " << engine_capacity << "cc" << endl;
    }

    string return_type(){
        return type;
    }

    ~Motorcycle(){
        cout << "Destruktor dla motocyklu " << brand << " " << model << endl;
    }
};

class Car : public Vehicle{
protected:
    string drive;
    string body;

private:
    int number_of_gears;

public:
    Car(string brand_, string model_, int production_year_, int mileage_, string drive_, string body_, int number_of_gears_)
        : Vehicle(brand_, model_, production_year_, mileage_),
        drive(drive_),
        body(body_),
        number_of_gears(number_of_gears_){
        cout << "Utworzona obiekt dla samochodu " << brand << " " << model << ", o nadwoziu " << body << endl;
    }

    void change_number_of_gears(int n_num){
        number_of_gears = n_num;
        cout << "Zmieniono ilosc biegow dla " << brand << " " << model << " na: " << number_of_gears << endl;
    }

    string return_drive(){
        return drive;
    }

    string return_body(){
        return body;
    }

    ~Car(){
        cout << "Destruktor dla samochodu " << brand << " " << model << endl;
    }
};

class Truck : public Car{
protected:
    int number_of_wheels;
    string cargo;

private:
    string capacity;

public:
    Truck(string brand_, string model_, int production_year_, int mileage_, string drive_, string body_, int number_of_gears_, int number_of_wheels_,  string cargo_, string capacity_)
        : Car(brand_, model_, production_year_, mileage_, drive_, body_, number_of_gears_),
        number_of_wheels(number_of_wheels_),
        cargo(cargo_),
        capacity(capacity_){
        cout << "Utworzona obiekt dla ciezarowki " << brand << " " << model << ", z zaladunkiem: " << cargo << endl;
    }

    void change_cargo(string n_cargo){
        cargo = n_cargo;
        cout << "Zmieniono typ zaladunku dla " << brand << " " << model << " na: " << cargo << endl;
    }

    void change_capacity(string n_capacity){
        capacity = n_capacity;
        cout << "Zmieniono ladownosc dla " << brand << " " << model << " na: " << cargo << endl;
    }

    string return_capacity(){
        return capacity;
    }

    ~Truck(){
        cout << "Destruktor dla ciezarowki " << brand << " " << model << endl;
    }
};

int main()
{
    Motorcycle M1("Junak", "m15", 2020, 500, "sportowy", 125);
    Car C2("Audi", "rs7", 2021, 30000, "4x4", "coupe", 8);
    Truck T3("Man", "tgx", 2021, 1000000, "4x2", "ciagnik siodlowy", 12, 4, "Dostawa żywności do sklepu", "36,4t");
    cout << endl;

    M1.change_capacity(500);
    cout << "Motocykl " << M1.return_brand() << " jest to motocykl " << M1.return_type()<< endl;
    cout << endl;

    C2.change_number_of_gears(6);
    cout << "Samochod " << C2.return_brand() << " ma naped " << C2.return_drive() << endl;
    cout << endl;

    T3.change_cargo("Nawozy");
    cout << "Tir " << T3.return_brand() << " ma maksymalny zaladunek " << T3.return_capacity() << endl;
    cout << endl;

    return 0;
}
