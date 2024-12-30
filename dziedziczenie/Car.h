#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"
#include <string>

class Car : public Vehicle {
public:
    Car(
        const std::string& s_Brand_
        ,const std::string& s_Model_
        ,const int i_ProductionYear_
        ,const int i_Mileage_
        ,const int i_FuelLevelInPercent_
        ,const std::string& s_Drive_
        ,const std::string& s_Body_
        ,const int i_NumberOfGears_
        );

    ~Car() ;

    void setNumberOfGears(const int i_nNumberOfGears_);

    std::string getDrive() const;

    std::string getBody() const;

    void displayInfo()const override;

protected:

    void logMaintenance() const override;

private:

    int validateNumberOfGears(int i_number);

protected:
    std::string s_Drive;
    std::string s_Body;

private:
    int i_NumberOfGears;
};

#endif // CAR_H
