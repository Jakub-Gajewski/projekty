#ifndef TRUCK_H
#define TRUCK_H

#include "Car.h"
#include <string>

class Truck : public Car {
public:
    Truck(
        const std::string& s_Brand_
        ,const std::string& s_Model_
        ,const int i_ProductionYear_
        ,const int i_Mileage_
        ,const int i_FuelLevelInPercent_
        ,const std::string& s_Drive_
        ,const std::string& s_Body_
        ,const int i_NumberOfGears_
        ,const int i_NumberOfWheels_
        ,const std::string& s_Cargo_
        ,const float f_CapacityInTons_
        );

    ~Truck() override;

    void setCargo(const std::string& s_nCargo);

    void setCapacity(const float f_nCapacity);

    float getCapacity() const;

    std::string getCargo() const;

    void displayInfo() const override;

protected:
    void logTruckDetails() const;

private:
    void logMaintenance() const override;

    float validateCapacity(float f_Capacity_);

protected:
    int i_NumberOfWheels;
    std::string s_Cargo;

private:
    float f_CapacityInTons;
};


#endif // TRUCK_H
