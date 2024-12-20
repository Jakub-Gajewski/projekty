#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H

#include "Vehicle.h"

class Motorcycle : public Vehicle {
public:
    Motorcycle(
        const std::string& sBrand_
        ,const std::string& sModel_
        ,const int iProductionYear_
        ,const int iMileage_
        ,const int iFuelLevelInPercent_
        ,const std::string& sType_
        ,const int iEngineCapacity_
        );

    ~Motorcycle();

    void displayInfo() const override;

    std::string getType() const;

    int getEngineCapacity() const;

protected:
    void logMaintenance() const override;


protected:
    std::string sType;

private:
    int iEngineCapacity;
};

#endif // MOTORCYCLE_H
