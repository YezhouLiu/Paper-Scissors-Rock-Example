#ifndef _IMC_PCPLAYER_H
#define _IMC_PCPLAYER_H

#include "player.h"

class PcPlayer: public Player{
public:
    PcPlayer();
    bool play(Game&);
};

#endif