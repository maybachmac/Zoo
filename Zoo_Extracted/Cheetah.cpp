#include "Cheetah.h"
#include <string>
#include <iostream>
using namespace std;

Cheetah::Cheetah(string nameOfAnimal, string name)
	: Animal(nameOfAnimal, name) 
{// assigns the habitat AFTER creation
	habitatType = "Savannah(Cheetah Den)";
}

void Cheetah::displayInfo() const {
	cout << "This animal is a " << nameOfAnimal << endl << "Name: " << name << endl;
}