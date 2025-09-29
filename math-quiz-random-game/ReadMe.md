# C++ Math Quiz CLI

A simple **command-line math quiz** written in C++. The program generates random math questions with addition, subtraction, and multiplication. Users answer until they get a question wrong, and the program keeps track of their score.

---

## Features

* ✅ Random addition, subtraction, and multiplication questions
* ✅ Random numbers between 0 and 100
* ✅ Keeps track of score
* ✅ Stops when the user gives a wrong answer
* ✅ Simple CLI interface

---

## Requirements

* C++11 or higher
* Compatible compiler (GCC, Clang, MSVC)
* No external libraries required

---

## How to Compile

Using **g++**:

```bash
g++ -std=c++11 -o math_quiz main.cpp
```

Then run:

```bash
./math_quiz
```

On Windows:

```bash
math_quiz.exe
```

---

## How to Use

1. Run the program.
2. The program will display a math question like:

```
23 + 47
```

3. Type your answer and press Enter.
4. If your answer is correct, your score increases by 1.
5. If your answer is incorrect, the game ends and your final score is displayed.

---

## Example

```
23 + 47
70
Correct! Your score is: 1
15 * 4
60
Correct! Your score is: 2
88 - 90
-1
Correct! Your score is: 3
50 + 20
100
You got this one wrong. Your final score is 3
```

---

## Author

Made with ❤️ by Kiuliumov

---

## License

This project is open-source and free to use.
