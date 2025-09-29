#include <iostream>
#include <random>


using namespace std;



int main()
{
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distrib(0, 100);

    int n = distrib(gen);
    int m = distrib(gen);
    int score = 0;
    char operations[4] = {'+', '-', '*', '/'};


    char operation = '+';
    int answer = 0;

    switch (operation) {
        case "+":
            answer = n + m;
            break;
        case "-":
            answer = n - m;
            break;
        case "*":
            answer = n * m;
            break;
        case "/":
            answer = n / m;
            break;
        default:
        cout << "Invalid operation." << endl;
    }
    int given_answer;
    while (true)
        cin >> given_answer;
        if (given_answer == answer) {
            score += given_answer;
        }



    }
    return 0;
}

