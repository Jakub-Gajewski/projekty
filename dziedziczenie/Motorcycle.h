#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H

#include "Vehicle.h"
#include <string>

class Motorcycle : public Vehicle {
public:
    Motorcycle(
        const std::string& s_Brand_
        ,const std::string& s_Model_
        ,const int i_ProductionYear_
        ,const int i_Mileage_
        ,const int i_FuelLevelInPercent_
        ,const std::string& s_Type_
        ,const int i_EngineCapacity_
        );

    ~Motorcycle();

    void displayInfo() const override;

    std::string getType() const;

    int getEngineCapacity() const;

protected:
    void logMaintenance() const override;


protected:
    std::string s_Type;

private:
    int i_EngineCapacity;
};

#endif // MOTORCYCLE_H
