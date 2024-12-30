#include "bird.h"
#include "dog.h"
#include "fish.h"
#include <iostream>
#include <vector>

using namespace std;

int main() {
    Bird sparrow("Sparrow", 2, 0.05, "Bird", "Forests", "Seeds", 20.0, true);
    Dog dog("Reksio", 5, 15.0, "Mammals", "Homes", "Meat", "Shepherd", true);
    Fish goldfish("Goldfish", 1, 0.3, "Fish", "Aquarium", "Aquatic Plants", "Saltwater", "200");

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

        if (auto* dogPtr = dynamic_cast<Dog*>(animal)) {
            dogPtr->wagTail();
        }

        std::cout << std::endl;
    }

    return 0;
}
