#ifndef DOG_H
#define DOG_H

#include "animal.h"
#include <string>

class Dog : public Animal{
public:
    Dog(
        const std::string& s_Name_
        ,int i_Age_
        ,double d_WeightInKilograms_
        ,const std::string& s_Species_
        ,const std::string& s_Habitat_
        ,const std::string& s_Diet_
        ,const std::string& s_Breed_
        ,bool b_IsAggressive_
        );

    ~Dog();

    void speak() const override;
    void move() override;
    void eat() override;
    void sleep() const override;
    void displayInfo() const override final;

    void wagTail() const;
    void fetch(const std::string& s_item);

public:
    std::string s_Breed;
    bool b_IsAggressive;
};

#endif // DOG_H
