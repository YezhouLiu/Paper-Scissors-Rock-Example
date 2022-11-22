#include "player.h"

Player::Player(): symbol('p') { }//by default, a player chooses paper

char Player::getSymbol() {
    return symbol;
}