#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Figure{
protected:
    double field = 0.0, circuit = 0.0;

public:
    Figure() {
        cout << "Utworzono figure" << endl;
    }

    virtual ~Figure() {
        cout << "Destruktor figury" << endl;
    }

    virtual void set_sides() = 0;
    virtual void display_sides() = 0;
    virtual double calculate_field() = 0;
    virtual double calculate_circuit() = 0;
    virtual void display_field_and_circuit() = 0;
};

class Rectangle : public Figure{
protected:
    double side1 = 0.0, side2 = 0.0;

public:
    Rectangle(){
        cout << "Utworzono prostokat" << endl;
    }

    void set_sides(){
        cout << "Podaj 1 bok: " << endl;
        cin >> side1;
        cout << "Podaj 2 bok: " << endl;
        cin >> side2;
    }

    void display_sides(){
        cout << "Bok 1: " << side1 << endl;
        cout << "Bok 2: " << side2 << endl;
    }

    double calculate_field(){
        field = side1 * side2;
        return field;
    }

    double calculate_circuit(){
        circuit = 2 * side1 + 2 * side2;
        return circuit;
    }

    void display_field_and_circuit(){
        cout << "Pole: " << field << "cm^2" << endl;
        cout << "Obwod: " << circuit << endl;
    }

    ~Rectangle(){
        cout << "Destruktor prostokata" << endl;
    }
};


class Square : public Figure{
protected:
    double side=0.0;

public:
    Square(){
        cout << "Utworzono kwadrat" << endl;
    }

    void set_sides(){
        cout << "Podaj bok: " << endl;
        cin >> side;
    }

    void display_sides(){
        cout << "Bok : " << side << endl;
    }

    double calculate_field(){
        field = pow(side, 2);
        return field;
    }

    double calculate_circuit(){
        circuit = 4 * side;
        return circuit;
    }

    void display_field_and_circuit(){
        cout << "Pole: " << field << "cm^2" << endl;
        cout << "Obwod: " << circuit << endl;
    }

    ~Square(){
        cout << "Destruktor kwadratu" << endl;
    }
};


class Right_triangle : public Figure{
protected:
    double side1 = 0.0, side2 = 0.0, side3 = 0.0;

public:
    Right_triangle(){
        cout << "Utworzono trojkat prostokatny" << endl;
    }

    void set_sides(){
        cout << "Podaj 1 bok: " << endl;
        cin >> side1;
        cout << "Podaj 2 bok: " << endl;
        cin >> side2;
        cout << "Podaj 3 bok: " << endl;
        cin >> side3;
    }

    void display_sides(){
        cout << "Bok 1: " << side1 << endl;
        cout << "Bok 2: " << side2 << endl;
        cout << "Bok 3: " << side3 << endl;
    }

    double calculate_field(){
        if(side1 + side2 > side3 && side1 + side3 > side2 && side3 + side2 > side1){
            if(side1 < side3 && side2 < side3){
                field = (side1 * side2) / 2;
                return field;
            }else if(side1 < side2 && side3 < side2){
                field = (side1 * side3) / 2;
                return field;
            }else{
                field = (side2 * side3) / 2;
                return field;
            }
        }else{
            return 0;
        }
    }

    double calculate_circuit(){
        circuit = side1 + side2 + side3;
        return circuit;
    }

    void display_field_and_circuit(){
        cout << "Pole: " << field << "cm^2" << endl;
        cout << "Obwod: " << circuit << endl;
    }

    ~Right_triangle(){
        cout << "Destruktor krojkata" << endl;
    }
};

int main()
{
    char fig;

    cout << "Wybierz figure, ktora chcesz policzyc - p, t, k: " << endl;
    cin >> fig;

    Figure *figure = NULL;

    if(fig == 't'){
        figure = new Right_triangle();
    }else if(fig == 'p'){
        figure = new Rectangle();
    }else if(fig == 'k'){
        figure = new Square();
    }

    figure->set_sides();
    figure->calculate_field();
    figure->calculate_circuit();
    figure->display_field_and_circuit();

    return 0;
}
