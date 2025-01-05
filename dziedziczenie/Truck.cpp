#include "Truck.h"
#include <iostream>

Truck::Truck(
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
    ) : Car{
            s_Brand_
            ,s_Model_
            ,i_ProductionYear_
            ,i_Mileage_
            ,i_FuelLevelInPercent_
            ,s_Drive_
            ,s_Body_
            ,i_NumberOfGears_
        }
    ,i_NumberOfWheels{i_NumberOfWheels_}
    ,s_Cargo{s_Cargo_}
    ,f_CapacityInTons{f_CapacityInTons_}
{
    std::cout << "Constructor of a truck " << s_Brand << " " << s_Model << ", with cargo: " << s_Cargo << std::endl;
}

Truck::~Truck()
{
    std::cout << "Destructor of a truck " << s_Brand << " " << s_Model << std::endl;
}

void Truck::setCargo(const std::string& s_nCargo)
{
    s_Cargo = s_nCargo;
    std::cout << "Changing type of cargo for " << s_Brand << " " << s_Model << " to: " << s_Cargo << std::endl;
}

void Truck::setCapacity(const float f_nCapacity)
{
    f_CapacityInTons = validateCapacity(f_nCapacity);
    std::cout << "Changing capacity for " << s_Brand << " " << s_Model << " to: " << f_CapacityInTons << std::endl;
}

float Truck::getCapacity() const
{
    return f_CapacityInTons;
}

std::string Truck::getCargo() const
{
    return s_Cargo;
}

void Truck::displayInfo() const
{
    std::cout << "Truck: " << s_Brand << " " << s_Model << ", year: " << i_ProductionYear
              << ", mileage: " << i_Mileage << " km, drive: " << s_Drive << ", body: " << s_Body
              << ", number of whells: " << i_NumberOfWheels << ", Cargo: " << s_Cargo << ", capacity: " << f_CapacityInTons << "ton/s." << std::endl;
}

void Truck::logTruckDetails() const
{
    std::cout << "Truck details: " << s_Brand << " " << s_Model
              << ", cargo: " << s_Cargo << ", capacity: " << f_CapacityInTons << std::endl;
}

void Truck::logMaintenance() const
{
    std::cout << "Truck maintenance information: " << s_Brand << " " << s_Model << std::endl;
}

float Truck::validateCapacity(float f_Capacity_)
{
    auto isInvalidCapacity = (f_Capacity_ < 0);
    if (isInvalidCapacity)
    {
        std::cerr << "Error: Capacity must be greater than 0!" << std::endl;
        return 0;
    }

    return f_Capacity_;
}


