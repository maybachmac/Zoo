#pragma once
#include "Animal.h"
//this format fixed my bug
class Cheetah : public Animal {
    //technically since Animal base class has name,nameOfAnimal,type protected, it allows us to inherit these attributes as a child.
public:
    Cheetah(string nameOfAnimal, string name);
    void displayInfo() const override;
};
