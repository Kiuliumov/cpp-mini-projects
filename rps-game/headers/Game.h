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
    Game(string userChoice);

    string validateUserChoice(string choice);
    string getComputerChoice();
    string determineWinner(string user, string computer);
    void showResult();
};

#endif
