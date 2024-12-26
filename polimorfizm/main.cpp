#include "bird.h"
#include "dog.h"
#include "fish.h"
#include <iostream>
#include <vector>

using namespace std;

int main() {
    Bird sparrow("Wrobel", 2, 0.05, "Ptak", "Lasy", "Ziarna", 20.0, true);
    Dog dog("Reksio", 5, 15.0, "Ssaki", "Domy", "Mięso", "Owczarek", true);
    Fish goldfish("Zlota rybka", 1, 0.3, "Ryby", "Akwarium", "Rośliny wodne", "Slona", "200");

    std::vector<Animal*> zoo;
    zoo.push_back(&sparrow);
    zoo.push_back(&dog);
    zoo.push_back(&goldfish);

    for (const auto& animal : zoo) {
        animal->displayInfo();
        animal->speak();
        animal->eat();
        animal->move();
        animal->sleep();
        std::cout << std::endl;
    }

    return 0;
}

