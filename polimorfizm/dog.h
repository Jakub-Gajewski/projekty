#ifndef DOG_H
#define DOG_H

#include "animal.h"

class Dog : public Animal{
public:
    Dog(
        const std::string& sName_,
        int iAge_,
        double dWeight_,
        const std::string& sSpecies_,
        const std::string& sHabitat_,
        const std::string& sDiet_,
        const std::string& sBreed_,
        bool sIsAggressive_
        );

    ~Dog();

    void speak() const override;
    void move() override;
    void eat() override;
    void sleep() const override;
    void displayInfo() const override;

    void wagTail() const;
    void fetch(const std::string& item);

public:
    std::string sBreed;
    bool sIsAggressive;
};

#endif // DOG_H
