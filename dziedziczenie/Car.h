#ifndef CAR_H
#define CAR_H

#include <iostream>
#include "Vehicle.h"

class Car : public Vehicle {
public:
    Car(
        const std::string& sBrand_,
        const std::string& sModel_,
        const int iProductionYear_,
        const int iMileage_,
        const int iFuelLevelInPercent_,
        const std::string& sDrive_,
        const std::string& sBody_,
        const int iNumberOfGears_
        );

    ~Car() ;

    void setNumberOfGears(const int nNum);

    std::string getDrive() const;

    std::string getBody() const;

    void displayInfo() override;

protected:

    void logMaintenance() override;

private:

    void validateNumberOfGears(int num);

protected:
    std::string sDrive;
    std::string sBody;

private:
    int iNumberOfGears;
};

#endif // CAR_H
