#ifndef ICREATURE_H
#define ICREATURE_H

class ICreature{
public:
    virtual ~ICreature() = default;

    virtual void speak() const = 0;
    virtual void move() = 0;
    virtual void eat() = 0;
    virtual void sleep() const = 0;
    virtual void displayInfo() const = 0;
};

#endif // ICREATURE_H
