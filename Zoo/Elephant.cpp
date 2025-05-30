#include "Elephant.h"
#include <string>
#include <iostream>
using namespace std;

//initializaer list passes parameters from Elephant into Animal and changes habitatType for the iteration to Savanah
Elephant::Elephant(string nameOfAnimal, string name)
    : Animal(nameOfAnimal, name) 
{

    habitatType = "Savannah";
}

void Elephant::displayInfo() const {
	cout << "This animal is a " << nameOfAnimal << endl << "Name: " << name << endl;
}