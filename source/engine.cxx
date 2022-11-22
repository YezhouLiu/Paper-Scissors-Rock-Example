#include <iostream>
#include "engine.h"
#include "humanplayer.h"
#include "pcplayer.h"
#include "game.h"

void Engine::luanchGame() {
    HumanPlayer p1; //we can choose to put it on the heap, however, in this example, a player does not requires too much space, and stack is fast
    PcPlayer p2;
    Game g;
    while (true) {
        p2.play(g);
        bool res = false;
        do {
            res = p1.play(g);
        }
        while (!res);
        if (p1.getSymbol() == 'q') {
            std::cout << "Quiting the game...\n";
            break;
        }
        if (gameResult(p1, p2) == 'd') {
            std::cout << "Draw! The PC player chooses " << p2.getSymbol() << " as well!\n";
        }
        else if (gameResult(p1, p2) == 'w') {
            std::cout << "You win! The PC player chooses " << p2.getSymbol() << ".\n";
        }
        else {
            std::cout << "You lose! The PC player chooses " << p2.getSymbol() << ".\n";
        }
        std::cout << "Please try again! Have fun :)\n\n";
    }
}

char Engine::gameResult(Player& p1, Player& p2) { //modify this method following different game rules
    if (p1.getSymbol() == p2.getSymbol()) {
        return 'd'; //draw
    }
    else if ((p1.getSymbol() == 'p' && p2.getSymbol() == 'r') || (p1.getSymbol() == 'r' && p2.getSymbol() == 's') || (p1.getSymbol() == 's' && p2.getSymbol() == 'p')) {
        return 'w'; //p1 win
    }
    else {
        return 'l'; //p1 lose
    }
}