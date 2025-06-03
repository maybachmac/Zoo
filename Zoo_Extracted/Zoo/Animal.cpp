#include "Animal.h"
#include <iostream>
#include <string>

//initializers for map and totalAnimals
map<string, int> Animal::animalTypeCount;
int Animal::totalAnimals = 0;

Animal::Animal(string nameOfAnimal, string name) {
    this->name = name;
    this->nameOfAnimal = nameOfAnimal;
    totalAnimals++;
    //increments the specific type of animal for the map
    animalTypeCount[nameOfAnimal]++;
}

int Animal::animalCount() {
    return totalAnimals;
}
//specific to the animal type i.e. Elephant,Wyrm,Cheetah ect, outputs the map
int Animal::animalCount(string nameOfAnimal) {
    return animalTypeCount[nameOfAnimal];
}

string Animal::getHabitatType() const {
    return habitatType;
}

void Animal::raiseRacket() const {

}