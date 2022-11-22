#ifndef _IMC_PLAYER_H
#define _IMC_PLAYER_H

class Game;

class Player{
protected:
    char symbol; //'p' paper, 'r' rock, 's' scissors, in this game example, only 3 bits are needed

public:
    Player();
    char getSymbol();
    virtual bool play(Game&) = 0;
};

#endif
