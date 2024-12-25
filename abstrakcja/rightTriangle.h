#ifndef RIGHTTRIANGLE_H
#define RIGHTTRIANGLE_H

#include "figure.h"

class RightTriangle : public Figure{

public:
    RightTriangle(
        double dSide1_
        ,double dSide2_
        ,double dSide3_
        );

    ~RightTriangle();

    void displaySides() const override;

    void setSides() override;

    double calculateField() override;

    double calculateCircuit() override;

private:
    bool isRightTriangle() const;   
};

#endif // RIGHTTRIANGLE_H
