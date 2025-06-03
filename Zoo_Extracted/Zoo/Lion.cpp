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

void Lion::makeSound() const {
    cout << "The " << nameOfAnimal << "'s" << " roar loadly pride!";
}

void Lion::countPennies() const {
    std::cout << "The lion counts... pennies?? ????" << endl << endl;
}