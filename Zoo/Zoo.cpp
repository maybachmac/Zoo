#include "Zoo.h"
#include <iostream>
using namespace std;

// Add a habitat into the Zoo’s list \, and class "::" function, just shows ownership , the parent of the child object
void Zoo::addHabitat(const Habitat& habitat) {
    habitats.push_back(habitat);
}

// Loop over every habitat and display its animals
void Zoo::displayZoo() const {
    //automatically sets the data type and loops over all habitats
    for (const auto& h : habitats) {
        h.displayAll();
        
    }
}