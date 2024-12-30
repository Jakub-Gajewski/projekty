#ifndef FIGURE_H
#define FIGURE_H

#include "ishape.h"
#include <string>

class Figure : public IShape{
public:
    Figure();

    virtual ~Figure();

    double getField() const;
    double getCircuit() const;
    std::string getFigureName() const;

protected:
    void isPositive(double number, double& variableName);

protected:
    double d_Field{0.0}, d_Circuit{0.0};
    std::string s_figureName;
};

#endif // FIGURE_H
