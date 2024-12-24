#ifndef RIGHTTRIANGLE_H
#define RIGHTTRIANGLE_H

#include "figure.h"

class RightTriangle : public Figure{

public:
    RightTriangle(
        double dSide1_,
        double dSide2_,
        double dSide3_
        );

    ~RightTriangle();

    void displaySides() const override;

    void setSides() override;

    double calculateField() override;

    double calculateCircuit() override;

private:
    bool isRightTriangle() const;

protected:
    double dSide1 = 0.0, dSide2 = 0.0, dSide3 = 0.0;
};

#endif // RIGHTTRIANGLE_H
