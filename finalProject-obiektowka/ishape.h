#ifndef ISHAPE_H
#define ISHAPE_H

class IShape{
public:
    virtual ~IShape() = default;
    virtual void displaySides() const = 0;
    virtual void setSides() = 0;
    virtual double calculateField() = 0;
    virtual double calculateCircuit() = 0;
};

#endif // ISHAPE_H
