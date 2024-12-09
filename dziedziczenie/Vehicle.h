#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>

class Vehicle {
public:
    Vehicle(
        const std::string& sBrand_
        ,const std::string& sModel_
        ,const int iProductionYear_
        ,const int iMileage_
        ,const int iFuelLevelInPercent_
        );

    virtual ~Vehicle();

    virtual void displayInfo() const = 0;

    void setMileage(const int nMil);

    int getMileage() const;

    std::string getBrand() const;

    void setFuelLevel(int newFuelLevel);

protected:
    virtual void logMaintenance() const = 0;

    void validateFuelLevel(int newFuelLevel);

private:
    void validateMileage(int newiMileage);

protected:
    std::string sBrand;
    std::string sModel;
    int iProductionYear;
    int iMileage;
    int iFuelLevelInPercent;
};

#endif // VEHICLE_H
