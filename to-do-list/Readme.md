# CLI To-Do List in C++

A simple command-line **to-do list application** written in C++.
It allows you to **add, remove, mark tasks as done, and view all tasks**.
Designed for learning C++ basics, vectors, classes, and input validation.

---

## Features

* ✅ Add new tasks (duplicates are prevented)
* ✅ Remove tasks by their number
* ✅ Mark tasks as done
* ✅ Print all tasks with status (`Completed` or `Pending`)
* ✅ Input validation for menu selection
* ✅ Multi-word task names supported

---

## Requirements

* C++17 compatible compiler (GCC, Clang, MSVC)
* No external libraries required

---

## How to Compile

Using **g++**:

```bash
g++ -std=c++17 -o todo main.cpp
```

Then run:

```bash
./todo
```

On Windows:

```bash
main.exe
```

---

## How to Use

1. Run the program.
2. Enter a number to choose an action:

```
0: Print all tasks
1: Add a new task
2: Remove a task
3: Mark a task as done
4: Exit
```

3. Follow the prompts to add/remove/mark tasks.
4. Task status is displayed as **Completed** or **Pending**.

---

## Example

```
Enter an action:
1
Enter a task name:
Buy milk
Successfully added the task.

Enter an action:
0
Current tasks:
1. Buy milk - Status: Pending

Enter an action:
3
Enter the number of the task to mark as done: 1
Task marked as done.

Enter an action:
0
Current tasks:
1. Buy milk - Status: Completed
```

---

## Author

Made with ❤️ by **Kiuliumov**

---

## License

This project is **open-source** and free to use.