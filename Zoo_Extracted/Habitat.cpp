#include "Habitat.h"
#include <iostream>
using namespace std;

Habitat::Habitat(string type) {
    this->type = type;
}

void Habitat::addAnimal(Animal* a) {
    if (a->getHabitatType() == type) {
        animals.push_back(a);
    }
    else {
        cout << "ERROR: This animal doesn't belong in a " << type << " habitat." << endl;
    }
}

void Habitat::displayAll() const {
    for (auto a : animals) {
        a->displayInfo();
        cout << "Habitat: " << type << endl << endl;
    }
}

string Habitat::getType() const {
    return type;
}
