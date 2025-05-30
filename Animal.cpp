#include "Animal.h"

int Animal::totalAnimals = 0;
map<string, int> Animal::animalTypeCount;

Animal::Animal(string nameOfAnimal, string name) {
    this->name = name;
    this->nameOfAnimal = nameOfAnimal;
    totalAnimals++;
    animalTypeCount[nameOfAnimal]++;
}

int Animal::animalCount() {
    return totalAnimals;
}

int Animal::animalCount(string nameOfAnimal) {
    return animalTypeCount[nameOfAnimal];
}

string Animal::getHabitatType() const {
    return habitatType;
}
