#ifndef TRUCK_H
#define TRUCK_H

#include "Car.h"

class Truck : public Car {
public:
    Truck(
        const std::string& sBrand_
        ,const std::string& sModel_
        ,const int iProductionYear_
        ,const int iMileage_
        ,const int iFuelLevelInPercent_
        ,const std::string& drive_
        ,const std::string& sBody_
        ,const int iNumberOfGears_
        ,const int iNumberOfWheels_
        ,const std::string& sCargo_
        ,const std::string& sCapacity_
        );

    ~Truck() override;

    void setCargo(const std::string& nsCargo);

    void setCapacity(const std::string& nsCapacity);

    std::string getCapacity() const;

    std::string getCargo() const;

    void displayInfo() const override;

protected:
    void logTruckDetails() const;

private:
    void logMaintenance() const override;

    void validateCapacity(int sCapacity);

protected:
    int iNumberOfWheels;
    std::string sCargo;

private:
    std::string sCapacity;
};


#endif // TRUCK_H
