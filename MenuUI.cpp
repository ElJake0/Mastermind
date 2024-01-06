#include "MenuUI.h"

void MenuUI::ShowWelcome()
{
    std::cout << "WELCOME TO MASTERMIND!";
    std::cout << std::endl;
}

void MenuUI::StartGame()
{
    std::cout << "Starting game";
    std::cout << std::endl;
}

std::vector<char> MenuUI::TakeGuess()
{
    char userInput[8];
    std::cout << "Make your first guess: ";
    // this should go to input handler later
    std::cin.getline(userInput, 8);

    // split should become its own function
    std::vector<char> guess;
    std::string placeholder;
    char separator = ' ';
    int i = 0;
    while (userInput[i] != '\0') {
        if (userInput[i] != separator) {
            // Append the char to the temp string.
            // placeholder += userInput[i]; 
            guess.push_back(userInput[i]);
        }
        i++;
    }
    return guess;
}