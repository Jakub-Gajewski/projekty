#ifndef VEHICLE_H
#define VEHICLE_H

#include "ICarriage.h"
#include <string>

class Vehicle : public ICarriage {
public:
    Vehicle(
        const std::string& s_Brand_
        ,const std::string& s_Model_
        ,const int i_ProductionYear_
        ,const int i_Mileage_
        ,const int i_FuelLevelInPercent_
        );

    ~Vehicle();

    void setMileage(const int i_nMil);

    int getMileage() const;

    std::string getBrand() const;

    void setFuelLevel(int i_newFuelLevel);

protected:
    int validateFuelLevel(int i_newFuelLevel);

private:
    void validateMileage(int i_newiMileage);

protected:
    std::string s_Brand;
    std::string s_Model;
    int i_ProductionYear;
    int i_Mileage;
    int i_FuelLevelInPercent;
};

#endif // VEHICLE_H
