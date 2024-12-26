#ifndef BIRD_H
#define BIRD_H

#include "animal.h"

class Bird : public Animal{
public:
    Bird(
        const std::string& sName_
        ,int iAge_
        ,double dWeight_
        ,const std::string& sSpecies_
        ,const std::string& sHabitat_
        ,const std::string& sDiet_
        ,float fWingsSpan_
        ,bool bCanFly_
        );

    ~Bird();

    void speak() const override;
    void move() override;
    void eat() override;
    void sleep() const override;
    void displayInfo() const override final;

    void wagWings() const;

private:
    bool checkWingsSpan(const int span);

public:
    float fWingsSpan; //centymetry
    bool bCanFly;
};

#endif // BIRD_H
