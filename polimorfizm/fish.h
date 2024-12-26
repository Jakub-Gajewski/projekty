#ifndef FISH_H
#define FISH_H

#include "animal.h"

class Fish : public Animal{
public:
    Fish(
        const std::string& sName_
        ,int iAge_
        ,double dWeight_
        ,const std::string& sSpecies_
        ,const std::string& sHabitat_
        ,const std::string& sDiet_
        ,const std::string& sWaterType_
        ,const std::string& sSwimDepth_
        );

    ~Fish();

    void speak() const override;
    void move() override;
    void eat() override;
    void sleep() const override;
    void displayInfo() const override final;

    void wagTail() const;

public:
    std::string sWaterType;
    std::string sSwimDepth;//metry
};

#endif // FISH_H
