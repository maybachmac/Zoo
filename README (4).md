# Zoo Management System (C++)

This project is a modular, object-oriented C++ application that simulates animal management in a virtual zoo environment. Users can add, display, and manage various animals, each with unique habitats and traits, using a menu-driven console interface.

## Features

- **OOP Architecture:** Uses class inheritance for animal types (e.g., Penguin, Wyrm), with a shared base and separate `.cpp`/`.h` files.
- **Habitat & Origin:** Each animal’s place of origin/habitat is displayed in its `displayInfo()` method.
- **Menu System:** Add animals, view all animals, and interact with the zoo through a console menu.
- **Clean Project Structure:** Includes all C++ source and header files, plus Visual Studio solution/project files for easy building.

## File List

- `Penguin.cpp` / `Penguin.h` - Penguin animal class.
- `Wyrm.cpp` / `Wyrm.h` - Wyrm (fantasy dragon) animal class.
- `Zoo.cpp` / `Zoo.h` - Core Zoo management logic and class.
- `Zoo.sln` / `Zoo.vcxproj` etc. - Visual Studio project/solution files.
- `README.md` - This documentation file.

## How to Build and Run

### **Using Visual Studio:**
1. Open `Zoo.sln` in Visual Studio.
2. Build the solution (`Ctrl+Shift+B`).
3. Run the project (`Ctrl+F5`).

### **Using g++ (command line):**
1. Open a terminal in this directory.
2. Compile all `.cpp` files:
   ```
   g++ *.cpp -o zoo
   ```
3. Run the program:
   ```
   ./zoo
   ```

## Author

D'ante McDaniel (@maybachmac)

---

*This project demonstrates proficiency in C++ object-oriented design, modular programming, and building multi-class applications in Visual Studio.*