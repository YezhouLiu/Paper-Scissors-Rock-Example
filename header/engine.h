#ifndef _IMC_ENGINE_H
#define _IMC_ENGINE_H

#include "player.h"

class Engine{
public:
    void luanchGame();
    char gameResult(Player& p1, Player& p2); //return value:'w' p1 win, 'l' p1 lose, 'd' draw

};

#endif