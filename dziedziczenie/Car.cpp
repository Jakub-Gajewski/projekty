#include "Car.h"
#include <iostream>

Car::Car(
    const std::string& s_Brand_
    ,const std::string& s_Model_
    ,const int i_ProductionYear_
    ,const int i_Mileage_
    ,const int i_FuelLevelInPercent_
    ,const std::string& s_Drive_
    ,const std::string& s_Body_
    ,const int i_NumberOfGears_
    ) : Vehicle{s_Brand_, s_Model_, i_ProductionYear_, i_Mileage_, i_FuelLevelInPercent_}
    ,s_Drive{s_Drive_}
    ,s_Body{s_Body_}
    ,i_NumberOfGears{i_NumberOfGears_}
{
    std::cout << "Constructor of a car " << s_Brand << " " << s_Model << ", with a " << s_Body << "body" << std::endl;
}

Car::~Car()
{
    std::cout << "Destructor of a car " << s_Brand << " " << s_Model << std::endl;
}

void Car::setNumberOfGears(const int i_nNumberOfGears_)
{

    i_NumberOfGears = validateNumberOfGears(i_nNumberOfGears_);
    auto brand = s_Brand;
    auto model = s_Model;

    std::cout << "The number of gears for " << brand << " " << model
              << " has been changed to: " << i_NumberOfGears << std::endl;
}


std::string Car::getDrive() const
{
    return s_Drive;
}

std::string Car::getBody() const
{
    return s_Body;
}

void Car::displayInfo() const
{
    auto gears = i_NumberOfGears;
    auto year = i_ProductionYear;
    auto mileage = i_Mileage;
    auto drive = s_Drive;
    auto body = s_Body;

    std::cout << "Car: " << s_Brand << " " << s_Model
              << ", year: " << year
              << ", mileage: " << mileage << " km"
              << ", drive: " << drive
              << ", body: " << body
              << ", number of gears: " << gears << std::endl;
}

void Car::logMaintenance() const
{
    std::cout << "Car maintenance information: " << s_Brand << " " << s_Model << std::endl;
}


int Car::validateNumberOfGears(int i_number)
{
    auto isInvalid = (i_number < 1);
    if (isInvalid)
    {
        std::cerr << "Error: The number of gears cannot be less than 1!" << std::endl;
        return 1;
    }

    return i_number;
}

