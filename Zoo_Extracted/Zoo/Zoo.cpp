#include "Zoo.h"
#include "Lion.h"
#include "Cheetah.h"
#include "Elephant.h"
#include "Penguin.h"
#include "Wyrm.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
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


void Zoo::raiseRacket() const {
    for (const Habitat& habitat : habitats) {
        habitat.raiseRacket();
    }
}
Habitat* Zoo::getHabitat(const std::string& name) {
    for (auto& habitat : habitats) {
        if (habitat.getType() == name) {
            return &habitat;
        }
    }
    return nullptr;
}

void Zoo::loadFromFile(const string& filename) {

    //file input stream
    ifstream file(filename);
    string line;

    vector<Habitat*> tempHabitats;

    while (getline(file, line)) {
        istringstream lineStream(line);
        //locally created
        string nameOfAnimal, name, habitatName, type;

        // /t tab delimiter, sets how exactly to split each line, in this case a tab, and in order.
        getline(lineStream, nameOfAnimal, '\t');
        getline(lineStream, name, '\t');



        Animal* animal = nullptr;

        if (type == "Lion") {
            animal = new Lion(nameOfAnimal, name);
        }
        else if (type == "Cheetah") {
            animal = new Cheetah(nameOfAnimal, name);
        }
        else if (type == "Elephant") {
            animal = new Elephant(nameOfAnimal, name);
        }
        else if (type == "Penguin") {
            animal = new Penguin(nameOfAnimal, name);
        }
        else if (type == "Wyrm") {
            animal = new Wyrm(nameOfAnimal, name);
        }
        else {
            cout << "Unknown animal type: " << type << "\n";
            continue;
        }

        Habitat* targetHabitat = getHabitat(habitatName);
        if (targetHabitat == nullptr) {
            targetHabitat = new Habitat(habitatName);
            addHabitat(*targetHabitat);

            targetHabitat->addAnimal(animal);

        }
    }
}