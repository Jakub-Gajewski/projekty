#ifndef VEHICLE_H
#define VEHICLE_H

class Vehicle{
protected:
    std::string brand;
    std::string model;
    int productionYear;
private:
    int mileage;
public:
    Vehicle(std::string brand_, std::string model_, int productionYear_, int mileage_)
        : brand(brand_),
        model(model_),
        productionYear(productionYear_),
        mileage(mileage_) {
        std::cout << "Utworzona obiekt dla pojazdu " << brand << " " << model << std::endl;
    }

    void set_mileage(int nMil){
        mileage = nMil;
        std::cout << "Zmieniono przebieg dla " << brand << " " << model << " na: " << nMil << std::endl;
    }

    int setMileage(){
        return mileage;
    }

    std::string setBrand(){
        return brand;
    }

    ~Vehicle(){
        std::cout << "Destruktor dla pojazdu " << brand << " " << model << " o przebiegu " << mileage << std::endl;
    }
};

#endif // VEHICLE_H
