#include "Penguin.h"
#include <iostream>

Penguin::Penguin(const string& kind, const string& name)
    : Animal(kind, name)
{
    habitatType = "Tundra";
}

void Penguin::displayInfo() const {
    cout << "This animal is a " << nameOfAnimal << endl << "Name: " << name << endl;
}
