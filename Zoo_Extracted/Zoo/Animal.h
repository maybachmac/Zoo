#pragma once
#include <string>
#include <map>
using namespace std;
//animal is already my abstract class, thankfully.
class Animal {
protected:
    string name;
    string nameOfAnimal;
    string habitatType;
    static int totalAnimals;
    //used a map to hold animals  in each specific habitat, also may be examply of polymorphic behavior
    static map<string, int> animalTypeCount;
    
    
public:
    Animal(string nameOfAnimal, string name);
    //example of purely virtual functions, they both are hence the =0. also no default is needed because of it being purely virtual
    virtual void displayInfo() const = 0;
    virtual void makeSound() const = 0;
    //made raiseRacket() purely virtual because i dont feel like making a default in Animal.cpp
    virtual void raiseRacket() const;
    string getHabitatType() const;
    static int animalCount();
    static int animalCount(string nameOfAnimal);
    //smart destructor???
    virtual ~Animal() = default;
};



/*Ill be frank, dynamic casting is basically only used when calling NONVIRTUAL FUNCTIONS
(it being non virtual implies that the
function is specific to the derived class, not the base)
onto pointers
*/