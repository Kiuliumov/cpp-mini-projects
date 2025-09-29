#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Task {
public:
    string task_name;
    bool isDone = false;

    explicit Task(string name) : task_name(move(name)) {}
};

void print_menu() {
    cout << "\nEnter an action:" << endl;
    cout << "0: Print all tasks" << endl;
    cout << "1: Add a new task" << endl;
    cout << "2: Remove a task" << endl;
    cout << "3: Mark a task as done" << endl;
    cout << "4: Exit" << endl;
}

void print_tasks(const vector<Task>& tasks) {
    if (tasks.empty()) {
        cout << "No tasks yet!" << endl;
        return;
    }

    cout << "Current tasks:\n";
    for (size_t i = 0; i < tasks.size(); ++i) {
        const auto& t = tasks[i];
        cout << i + 1 << ". " << t.task_name << t.task_name
             << " - Status: "
             << (t.isDone ? "Completed" : "Pending")
             << endl;
    }
}

int main() {
    vector<Task> tasks;
    int input = 0;

    while (input != 4) {
        print_menu();
        cin >> input;

        switch (input) {
            case 0: {
                print_tasks(tasks);
                break;
            }

            case 1: {
                cin.ignore();
                string task_name;
                cout << "Enter a task name:" << endl;
                getline(cin, task_name);

                // Check for duplicates
                bool found = false;
                for (const auto& t : tasks) {
                    if (t.task_name == task_name) {
                        found = true;
                        break;
                    }
                }

                if (!found) {
                    tasks.emplace_back(task_name);
                    cout << "Successfully added the task." << endl;
                } else {
                    cout << "Task is already in the task list." << endl;
                }
                break;
            }

            case 2: {
                if (tasks.empty()) {
                    cout << "No tasks to remove!" << endl;
                    break;
                }

                print_tasks(tasks);
                cout << "Enter the number of the task to remove: ";
                size_t index;
                cin >> index;

                if (index >= 1 && index <= tasks.size()) {
                    tasks.erase(tasks.begin() + index - 1);
                    cout << "Task removed." << endl;
                } else {
                    cout << "Invalid task number." << endl;
                }
                break;
            }

            case 3: {
                if (tasks.empty()) {
                    cout << "No tasks to mark done!" << endl;
                    break;
                }

                print_tasks(tasks);
                cout << "Enter the number of the task to mark as done: ";
                size_t index;
                cin >> index;

                if (index >= 1 && index <= tasks.size()) {
                    tasks[index - 1].isDone = true;
                    cout << "Task marked as done." << endl;
                } else {
                    cout << "Invalid task number." << endl;
                }
                break;
            }

            case 4:
                cout << "Thank you for using! Made by Kiuliumov <333" << endl;
                break;

            default:
                cout << "Invalid input. Try again." << endl;
                break;
        }
    }
    return 0;
}
