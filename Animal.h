#pragma once
#include <string>
#include <map>
using namespace std;

class Animal {
    //only needed by this and children so protected, not private
protected:
    string name;
    string nameOfAnimal;
    string habitatType;
    static int totalAnimals;
    static map<string, int> animalTypeCount;
public:
    Animal(string nameOfAnimal, string name);
    virtual void displayInfo() const = 0;
    virtual string getHabitatType() const;
    static int animalCount();
    static int animalCount(string nameOfAnimal);
    virtual ~Animal() = default;
};
