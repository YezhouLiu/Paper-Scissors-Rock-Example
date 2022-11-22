#include <iostream>
#include <algorithm>
#include <cctype>
#include "humanplayer.h"
#include "game.h"

HumanPlayer::HumanPlayer() { }

bool HumanPlayer::play(Game& g) {
    std::cout << "Please input your choice: 'p' for paper, 'r' for rock, 's' for scissors, and 'q' to quit the game.\n";
    if (std::cin >> symbol) {
        symbol = tolower(symbol);
        if (symbol == 'q') { //quit the game, handle it in the engine
            return true;
        }
        else if (std::find(g.gameOptions.begin(), g.gameOptions.end(), symbol) == g.gameOptions.end()) {
            std::cout << "Invalid game option! Please retry.\n";
        } 
        else {
            return true; //valid game option
        }
    } 
    else if (std::cin.bad()) {
        std::cout << "I/O error! Please retry.\n";
    }
    else if (std::cin.eof())  {
        std::cout << "End of file detected! Please retry.\n"; 
    } 
    return false;
}