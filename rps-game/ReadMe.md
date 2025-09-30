# 🎮 Rock–Paper–Scissors in C++

This project is a simple **Rock–Paper–Scissors** game written in modern C++ (C++17).  
It’s designed as a **tutorial project** to demonstrate how to:

- Define and use **classes** in C++
- Separate code into **header (`.h`) and source (`.cpp`) files**
- Handle **user input** with `cin`
- Use **random number generation** (`<random>`)
- Throw and catch **exceptions** for input validation
- Build a project with **CMake**

---

## 📂 Project Structure

```
project/
│
├── CMake.txt      # Build configuration (for CLion or CMake users)
├── headers/
│   └── Game.h          # Class declaration (header file)
├── src/
│   ├── Game.cpp        # Class implementation (source file)
│   └── main.cpp        # Entry point of the program
└── README.md           # This tutorial file
```

---

## 🔑 Code Breakdown

### `Game.h` (Header File)
Declares the `Game` class — the **blueprint** for our game logic.

```cpp
#ifndef GAME_H
#define GAME_H

#include <string>
using namespace std;

class Game {
private:
    string userChoice;
    string computerChoice;
    string state;

public:
    Game(string userChoice);              // Constructor
    string validateUserChoice(string);    // Input validation
    string getComputerChoice();           // Random choice
    string determineWinner(string, string); // Game logic
    void showResult();                    // Display results
};

#endif
```

---

### `Game.cpp` (Source File)
Implements the methods declared in `Game.h`.

- Uses `<random>` to generate the computer’s move.
- Uses `<algorithm>` to safely lowercase the user’s input.
- Throws `invalid_argument` if the input is invalid.

---

### `main.cpp` (Entry Point)
Handles the **game loop**:
1. Prompt user for input.
2. Create a `Game` object.
3. Show results.
4. Ask if the player wants to play again.

---

## 🛠️ Building the Project

### **Option 1: Using g++**
```sh
g++ src/main.cpp src/Game.cpp -Iinclude -o rps
./rps
```

### **Option 2: Using CLion / CMake**
`CMakeLists.txt`:
```cmake
cmake_minimum_required(VERSION 3.20)
project(RockPaperScissors)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(RockPaperScissors
    src/main.cpp
    src/Game.cpp
)
```

Build and run inside CLion (CMake takes care of linking automatically).

---

## 📚 What You’ll Learn

1. **Class basics**
    - How to declare (`.h`) and implement (`.cpp`) a class.
2. **Encapsulation**
    - Keeping member variables `private`.
    - Using **getters, setters, and validation**.
3. **Error handling**
    - Throwing `std::invalid_argument` for bad input.
    - Catching exceptions with `try`/`catch`.
4. **Randomness in C++**
    - Using `std::random_device`, `std::mt19937`, and `std::uniform_int_distribution`.
5. **Game loop**
    - Using `while` loops and `cin` to play multiple rounds.

---

## 🎯 Example Run

```
Enter your choice (rock, paper, scissors): rock
You chose: rock
Computer chose: scissors
You win!

Do you want to play again? (y/n): y

Enter your choice (rock, paper, scissors): lizard
Error: Invalid choice! Must be rock, paper, or scissors.

Do you want to play again? (y/n): n
Thanks for playing! Goodbye.
```

---

## 🚀 Next Steps (Challenges)

- Add **score tracking** across rounds.
- Support **best of 3** mode.
- Extend with **Rock–Paper–Scissors–Lizard–Spock**.
- Write **unit tests** for `Game`.  
