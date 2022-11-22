#ifndef _IMC_GAME_H
#define _IMC_GAME_H

#include <vector>

class Game{
private:
    std::vector<char> gameOptions;

public:
    friend class PcPlayer; //I use friend here rather than getters to avoid the potential copy of the vector
    friend class HumanPlayer;
    
    Game();
};

#endif