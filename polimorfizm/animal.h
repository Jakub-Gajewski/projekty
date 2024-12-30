#ifndef ANIMAL_H
#define ANIMAL_H

#include "icreature.h"
#include <string>

class Animal : public ICreature{
public:
    Animal(
        const std::string& s_Name_
        ,int i_Age_
        ,double d_WeightInKilograms_
        ,const std::string& s_Species_
        ,const std::string& s_Habitat_
        ,const std::string& s_Diet_
        );

    virtual ~Animal();

protected:
    bool checkAge(const int i_age);
    bool checkWeight(const int i_weight);

public:
    std::string s_Name;
    int i_Age;
    double d_WeightInKilograms{0.0};
    std::string s_Species;
    std::string s_Habitat;
    std::string s_Diet;
};

#endif // ANIMAL_H
