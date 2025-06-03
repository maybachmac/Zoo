#pragma once
#include "Cheetah.h"
#include <string>
#include<iostream>
using namespace std;

Cheetah::Cheetah(string nameOfAnimal, string name)
	: Animal(nameOfAnimal, name) 
{// assigns the habitat AFTER creation
	habitatType = "Savannah(Cheetah Den)";
}

void Cheetah::displayInfo() const {
	cout << "This animal is a " << nameOfAnimal << endl << "Name: " << name << endl;
}

void Cheetah::makeSound() const {
	cout << "The " << nameOfAnimal << "'s" << " MEOOOW(idk) with Impatience!" << endl;
}

void Cheetah::dashOut() const {
	cout << "The Cheetah dashes away with explosive speed!" << endl << endl;
}