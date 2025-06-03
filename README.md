# Zoo Management System 🦁🐧🐘🐉

## Description
This project is a C++ implementation of a dynamic Zoo Management System that utilizes object-oriented programming concepts including:

- Inheritance and polymorphism
- Dynamic memory allocation
- Abstract base classes and pure virtual functions
- File input (CSV-style, tab-delimited)
- Type identification and downcasting

The system reads animal data from a file (`animals.txt`), dynamically allocates each animal to the appropriate subclass (`Lion`, `Penguin`, `Cheetah`, `Elephant`, `Wyrm`), and assigns them to their respective habitats. It demonstrates virtual method overriding, runtime type behavior, and class encapsulation.

## Features
- Reads animals and habitats from a tab-delimited file
- Dynamically allocates animals and stores them in appropriate habitat containers
- Displays each animal's info and makes it perform actions unique to its type
- Demonstrates type-specific behavior using subclass-exclusive methods

## Sample Output
```
This animal is a Elephant
Name: Big-Nose
Habitat: Savannah
...
Racket from the Cave Habitat
The Wyrm's hiss with Malice
The Wyrm breathes fire into the sky!
```

## How to Run
1. Open the project in Visual Studio.
2. Ensure `animals.txt` is in the root project directory (same folder as your `.vcxproj`).
3. Press **F5** or **Ctrl+F5** to build and run.

## File Format (animals.txt)
Each line must follow this tab-delimited format:

```
HabitatName    AnimalType    AnimalNameOfType    AnimalName
```

Example:
```
Savannah    Cheetah    Cheetah    Tyreek Hill
Tundra      Penguin    Penguin    Pingu
```

## Classes
- `Animal` (abstract base class)
- `Lion`, `Penguin`, `Wyrm`, `Elephant`, `Cheetah` (derived classes)
- `Habitat` (contains multiple animals)
- `Zoo` (container for all habitats and orchestration logic)

## Author
D’ante McDaniel  
Veteran | Software Engineering Student | Future Pro Coder
