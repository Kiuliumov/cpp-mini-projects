#include "Game.h"
#include <iostream>
#include <vector>
#include <random>
#include <algorithm>
#include <stdexcept>

using namespace std;

static vector<string> choices = {"rock", "paper", "scissors"};

Game::Game(string userChoice) {
    this->userChoice = validateUserChoice(userChoice);
    this->computerChoice = getComputerChoice();
    this->state = determineWinner(this->userChoice, this->computerChoice);
}

string Game::validateUserChoice(string choice) {
    transform(choice.begin(), choice.end(), choice.begin(), ::tolower);

    if (choice != "rock" && choice != "paper" && choice != "scissors") {
        throw invalid_argument("Invalid choice! Must be rock, paper, or scissors.");
    }
    return choice;
}

string Game::getComputerChoice() {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distr(0, choices.size() - 1);
    return choices[distr(gen)];
}

string Game::determineWinner(string user, string computer) {
    if (user == computer) return "It's a tie!";

    if ((user == "rock" && computer == "scissors") ||
        (user == "paper" && computer == "rock") ||
        (user == "scissors" && computer == "paper")) {
        return "You win!";
        } else {
            return "Computer wins!";
        }
}

void Game::showResult() {
    cout << "You chose: " << userChoice << endl;
    cout << "Computer chose: " << computerChoice << endl;
    cout << state << endl;
}
