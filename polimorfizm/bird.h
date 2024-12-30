#ifndef BIRD_H
#define BIRD_H

#include "animal.h"
#include <string>

class Bird : public Animal{
public:
    Bird(
        const std::string& s_Name_
        ,int i_Age_
        ,double d_WeightInKilograms_
        ,const std::string& s_Species_
        ,const std::string& s_Habitat_
        ,const std::string& s_Diet_
        ,float f_WingsSpanInCentimeter_
        ,bool b_CanFly_
        );

    ~Bird();

    void speak() const override;
    void move() override;
    void eat() override;
    void sleep() const override;
    void displayInfo() const override final;

    void wagWings() const;

private:
    bool checkWingsSpan(const int i_span);

public:
    float f_WingsSpanInCentimeter;
    bool b_CanFly;
};

#endif // BIRD_H
