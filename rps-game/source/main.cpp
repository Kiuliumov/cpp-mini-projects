#include <iostream>
#include "../headers/Game.h"
using namespace std;

int main() {
    string userInput;
    char playAgain = 'y';

    while (playAgain == 'y' || playAgain == 'Y') {
        try {
            cout << "Enter your choice (rock, paper, scissors): ";
            cin >> userInput;

            Game g(userInput);
            g.showResult();
        } catch (const exception& e) {
            cerr << "Error: " << e.what() << endl;
        }

        cout << "\nDo you want to play again? (y/n): ";
        cin >> playAgain;
        cout << endl;
    }

    cout << "Thanks for playing! Goodbye.\n";
    return 0;
}
