#ifndef RIGHTTRIANGLE_H
#define RIGHTTRIANGLE_H

#include "figure.h"
#include <string>

class RightTriangle : public Figure {
public:
    RightTriangle(
        double d_Side1_
        , double d_Side2_
        , double d_Side3_
        ) ;

    ~RightTriangle() ;

    void displaySides() const override ;

    void setSides() override ;

    double calculateField() override ;

    double calculateCircuit() override ;

    bool operator==(const RightTriangle& other) const;

    RightTriangle operator+(const RightTriangle& other) const;

private:
    bool isRightTriangle() const ;

protected:
    double d_Side1{0.0}, d_Side2{0.0}, d_Side3{0.0};
};

#endif // RIGHTTRIANGLE_H
