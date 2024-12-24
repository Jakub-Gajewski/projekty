#ifndef FIGURE_H
#define FIGURE_H

#include <iostream>

class Figure{
public:
    Figure();

    virtual ~Figure();

    virtual void displaySides() const = 0;
    virtual void setSides() = 0;
    virtual double calculateField() = 0;
    virtual double calculateCircuit() = 0;
    double getField() const;
    double getCircuit() const;
    std::string getFigureName() const;

protected:
    void isPositive(double number, double& variableName);

protected:
    double dField = 0.0, dCircuit = 0.0;
    std::string figureName;
};

#endif // FIGURE_H
