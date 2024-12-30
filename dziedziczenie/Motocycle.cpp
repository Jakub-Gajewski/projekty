#include "Motorcycle.h"
#include <iostream>

Motorcycle::Motorcycle(
    const std::string& s_Brand_
    ,const std::string& s_Model_
    ,const int i_ProductionYear_
    ,const int i_Mileage_
    ,const int i_FuelLevelInPercent_
    ,const std::string& s_Type_
    ,const int i_EngineCapacity_
    ) : Vehicle{s_Brand_, s_Model_, i_ProductionYear_, i_Mileage_, i_FuelLevelInPercent_}
    ,s_Type{s_Type_}
    ,i_EngineCapacity{i_EngineCapacity_}
{
    std::cout << "Constructor of a motocycle " << s_Brand << " " << s_Model << ", with engine capacity " << i_EngineCapacity << "cc" << std::endl;
    }

Motorcycle::~Motorcycle()
{
    std::cout << "Destructor of a motocycle " << s_Brand << " " << s_Model << std::endl;
}

void Motorcycle::displayInfo() const
{
    auto fuelLevel = i_FuelLevelInPercent;
    auto engineCapacity = i_EngineCapacity;

    std::cout << "Brand: " << s_Brand << ", Model: " << s_Model
              << ", Production year: " << i_ProductionYear
              << ", Mileage: " << i_Mileage
              << ", Fuel level: " << fuelLevel << "%"
              << ", Type: " << s_Type
              << ", Engine capacity : " << engineCapacity << "cm^3"
              << std::endl;
}


std::string Motorcycle::getType() const
{
    return s_Type;
}

int Motorcycle::getEngineCapacity() const
{
    return i_EngineCapacity;
}

void Motorcycle::logMaintenance() const
{
    std::cout << "Motocycle maintenance information: " << s_Brand << " " << s_Model << std::endl;
}

