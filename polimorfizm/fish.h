#ifndef FISH_H
#define FISH_H

#include "animal.h"
#include <string>

class Fish : public Animal{
public:
    Fish(
        const std::string& s_Name_
        ,int i_Age_
        ,double d_WeightInKilograms_
        ,const std::string& s_Species_
        ,const std::string& s_Habitat_
        ,const std::string& s_Diet_
        ,const std::string& s_WaterType_
        ,const std::string& s_SwimDepthInMeters_
        );

    ~Fish();

    void speak() const override;
    void move() override;
    void eat() override;
    void sleep() const override;
    void displayInfo() const override final;

    void wagTail() const;

public:
    std::string s_WaterType;
    std::string s_SwimDepthInMeters;
};

#endif // FISH_H
