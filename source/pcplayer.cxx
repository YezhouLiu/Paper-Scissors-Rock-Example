#include <random>
#include "pcplayer.h"
#include "game.h"

PcPlayer::PcPlayer() { }

bool PcPlayer::play(Game& g) {
    std::random_device rd; //seed
    std::mt19937 rng(rd()); //engine - Mersenne-Twister
    std::uniform_int_distribution<int> uni(0, g.gameOptions.size() - 1); //fairness distribution
    symbol = g.gameOptions[uni(rng)]; //get a random option from g.gameOptions
    return true;
}