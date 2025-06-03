#pragma once
#include <string>
#include <vector>
#include "Animal.h"
using namespace std;

class Habitat {
private:
    string type;
    vector<Animal*> animals;
public:
    Habitat(string type);
    void addAnimal(Animal* a);
    void displayAll() const;
    string getType() const;
};
