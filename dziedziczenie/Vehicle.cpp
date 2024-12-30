#include "Vehicle.h"
#include <iostream>

Vehicle::Vehicle(
    const std::string& s_Brand_
    ,const std::string& s_Model_
    ,const int i_ProductionYear_
    ,const int i_Mileage_
    ,const int i_FuelLevelInPercent_
    ) : s_Brand{s_Brand_}
    ,s_Model{s_Model_}
    ,i_ProductionYear{i_ProductionYear_}
    ,i_Mileage{i_Mileage_}
    ,i_FuelLevelInPercent{i_FuelLevelInPercent_}
{
    std::cout << "Constructor of a vehicle" << std::endl;
}

Vehicle::~Vehicle()
{
    std::cout << "Destructor of a vehicle" << std::endl;
}

void Vehicle::setMileage(const int i_newiMileage)
{
    validateMileage(i_newiMileage);
}

int Vehicle::getMileage() const
{
    return i_Mileage;
}

std::string Vehicle::getBrand() const
{
    return s_Brand;
}

void Vehicle::setFuelLevel(int i_newFuelLevel)
{
    i_FuelLevelInPercent = validateFuelLevel(i_newFuelLevel);
    std::cout << "Fuel level in vehicle " << s_Brand << " " << s_Model << " changing to: " << i_FuelLevelInPercent << "%" << std::endl;
}

int Vehicle::validateFuelLevel(int i_newFuelLevel)
{
    auto isUp{i_newFuelLevel > (100)};
    auto isDown{i_newFuelLevel < 0};
    if (isUp) {
        std::cerr << "Error: Fuel level must be in range between 0 and 100%" << std::endl;
        return 100;
    }
    else if(isDown) {
        std::cerr << "Error: Fuel level must be in range between 0 and 100%" << std::endl;
        return 0;
    }
    else {
        return i_newFuelLevel;
    }
}

void Vehicle::validateMileage(int i_newiMileage)
{
    auto isInvalidMileage = (i_newiMileage < i_Mileage);
    if (isInvalidMileage)
    {
        std::cerr << "Error: New mileage can't by less than the curren one!" << std::endl;
    }else
    {
        i_Mileage = i_newiMileage;
        std::cout << "Changing mileage for " << s_Brand << " " << s_Model << " to: " << i_newiMileage << std::endl;
    }
}
