#ifndef RIGHTTRIANGLE_H
#define RIGHTTRIANGLE_H

#include "figure.h"
#include <iostream>

class RightTriangle : public Figure{

public:
    RightTriangle(
        double dSide1_,
        double dSide2_,
        double dSide3_
        );

    ~RightTriangle();

    void setSides() override;

    void getSides() override;

    double calculateField() override;

    double calculateCircuit() override;

    void getField() override;

    void getCircuit() override;

private:
    int isTriangle(double dSide1, double dSide2, double dSide3);

protected:
    double dSide1 = 0.0, dSide2 = 0.0, dSide3 = 0.0;
};

#endif // RIGHTTRIANGLE_H
