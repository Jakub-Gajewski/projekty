#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal{
public:
    Animal(
        const std::string& sName_
        ,int iAge_
        ,double dWeight_
        ,const std::string& sSpecies_
        ,const std::string& sHabitat_
        ,const std::string& sDiet_
        );

    virtual ~Animal();

    virtual void speak() const = 0;
    virtual void move() = 0;
    virtual void eat() = 0;
    virtual void sleep() const = 0;
    virtual void displayInfo() const = 0;

protected:
    bool checkAge(const int age);
    bool checkWeight(const int weight);

public:
    std::string sName;
    int iAge;
    double dWeight{0.0}; //kilogramy
    std::string sSpecies;
    std::string sHabitat;
    std::string sDiet;
};

#endif // ANIMAL_H
