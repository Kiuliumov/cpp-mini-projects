#include <iostream>
#include <random>


using namespace std;

int getAnswer(int n, int m, char operation) {
    int answer;
    switch (operation) {
        case '+':
            answer = n + m;
            break;
        case '-':
            answer = n - m;
            break;
        case '*':
            answer = n * m;
            break;
        default:
            cout << "Invalid operation." << endl;
    }

    return answer;
}

int main()
{
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distrib(0, 100);
    uniform_int_distribution<> distrb3(0, 3);

    int n;
    int m;

    int score = 0;
    char operations[4] = {'+', '-', '*'};

    char operation;
    int given_answer;

    int answer;

    while (true) {
        n =  distrib(gen);
        m =  distrib(gen);
        operation = operations[distrb3(gen)];
        answer = getAnswer(n, m, operation);


        cout << n << " " << operation << " " << m << endl;
        cin >> given_answer;

        if (answer == given_answer) {
            score += 1;
            cout << "Your score is: " << score << endl;
        } else {
            cout << "You got this one wrong. Your final score is " << score << endl;
            break;
        }
    }

    return 0;
}

