#include <iostream>
#include <utility>
#include <vector>
using namespace std;



class Task {
    public:
        string task_name;
        bool isDone = false;

    explicit Task(string name) {
        task_name = move(name);
    }

};

void print_menu() {
    cout << "Enter an action:" << endl;
    cout << "0: Print all tasks" << endl;
    cout << "1: Add a new task" << endl;
    cout << "2: Remove a task" << endl;
    cout << "3: Mark a task as done:" << endl;
    cout << "4: Exit" << endl;
}



int main() {
    vector<Task> tasks;
    vector<string> task_names;
    int input = 0;

    while (input != 4) {
        print_menu();
        cin >> input;

        switch (input) {
            case 1: {
                cin.ignore();
                string task;
                cout << "Enter a task name:" << endl;
                getline(cin, task);

                bool found = false;
                for (const auto& target : task_names) {
                    if (target == task) {
                        found = true;
                        break;
                    }
                }

                if (!found) {
                    tasks.emplace_back(task);
                    task_names.push_back(task);
                    cout << "Successfully added the task." << endl;
                } else {
                    cout << "Task is already in the task list." << endl;
                }
                break;
            }

        }
    }
}