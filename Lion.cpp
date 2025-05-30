#include "Lion.h"
#include <iostream>
using namespace std;

Lion::Lion(string nameOfAnimal, string name)
    : Animal(nameOfAnimal, name)
{
    habitatType = "Savannah(Lion Den)";
}

void Lion::displayInfo() const {
    cout << "This animal is a " << nameOfAnimal << endl
        << "Name: " << name << endl;
}
