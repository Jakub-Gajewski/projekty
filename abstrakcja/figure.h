#ifndef FIGURE_H
#define FIGURE_H

class Figure{
public:
    Figure();

    virtual ~Figure();

    virtual void getSides() = 0;
    virtual void setSides() = 0;
    virtual double calculateField() = 0;
    virtual double calculateCircuit() = 0;
    double getField();
    double getCircuit();

protected:
    double dField = 0.0, dCircuit = 0.0;
};

#endif // FIGURE_H
