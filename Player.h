#ifndef PLAYER_H
#define PLAYER_H

#include "Board.h"

class Player
{
  public:
    Player();
    ~Player();

    std::vector<char> guess;
    void TakeGuess(std::vector<char> &guess);
    void ClearGuess();
};

#endif