#include "Zoo.h"
#include "Lion.h"
#include "Penguin.h"
#include "Wyrm.h"
#include "Elephant.h"
#include "Cheetah.h"
#include <iostream>
//let me know if my included libraries need to be cleaned up
using namespace std;

int main() {
    //Creates the Zoo
        Zoo zoo;
        //stack allocated memory no pointer required
        Habitat savannah("Savannah(Lion Den)");
        Habitat savannah2("Savannah(Cheetah Den)");
        Habitat tundra("Tundra");
        Habitat savannah3("Savannah");
        Habitat cave("Cave");
        //heap allocated memory with pointer using new
        Lion* leo = new Lion("Lion", "Leo");
        Penguin* pingu = new Penguin("Penguin", "Pingu");
        Wyrm* slithy = new Wyrm("Wyrm", "Slithy");
        Elephant* bigNose = new Elephant("Elephant", "Big-Nose");
        Cheetah* tyreekHill = new Cheetah("Cheetah", "Tyreek Hill");

         //allocates note:its best to create THEN allocate, but whatever it works
        tundra.addAnimal(pingu);
        savannah.addAnimal(leo);
        savannah2.addAnimal(tyreekHill);
        savannah3.addAnimal(bigNose);
        cave.addAnimal(slithy);

        //creates vector of <Habitat> in each named as such
        zoo.addHabitat(savannah);
        zoo.addHabitat(tundra);
        zoo.addHabitat(cave);
        zoo.addHabitat(savannah2);
        zoo.addHabitat(savannah3);
        savannah.addAnimal(leo);
        zoo.displayZoo();
        

        // You have to MANUALLY manage data in heap :(
        delete leo;
        delete pingu;
        delete tyreekHill;
        delete bigNose;
        delete slithy;
        
        return 0;
    }

