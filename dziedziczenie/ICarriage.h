#ifndef ICARRIAGE_H
#define ICARRIAGE_H

class ICarriage {
public:
    virtual ~ICarriage() = default;
    virtual void displayInfo() const = 0;
    virtual void logMaintenance() const = 0;
};

#endif // ICARRIAGE_H
