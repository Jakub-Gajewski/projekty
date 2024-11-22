#ifndef FIGURE_H
#define FIGURE_H

class Figure{
public:
    Figure();

    virtual ~Figure();

    virtual void display_sides() = 0;
    virtual double calculate_field() = 0;
    virtual double calculate_circuit() = 0;
    virtual void display_field_and_circuit() = 0;

protected:
    double field = 0.0, circuit = 0.0;
};

#endif // FIGURE_H
