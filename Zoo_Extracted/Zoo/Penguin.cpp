#include "Penguin.h"
#include <iostream>

Penguin::Penguin(string nameOfAnimal,string name)
: Animal(nameOfAnimal,name) 
{
    habitatType = "Tundra";
}

void Penguin::displayInfo() const {
    cout << "This animal is a " << nameOfAnimal << endl << "Name: " << name << endl;
}

void Penguin::makeSound() const {
    cout << "The " << nameOfAnimal << "'s" << "sqack with Solitude?" << endl;
}

void Penguin::slideAway() const {
    cout << "The Penguins slide around the Tundra!" << endl << endl;
}