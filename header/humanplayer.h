#ifndef _IMC_HUMANPLAYER_H
#define _IMC_HUMANPLAYER_H

#include "player.h"

class HumanPlayer: public Player{
public:
    HumanPlayer();
    bool play(Game&);
};

#endif