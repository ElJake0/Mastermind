#ifndef BOARD_H
#define BOARD_H

#include <iostream>

class Board
{
  public:
    Board();
    ~Board();

    int getBoardWidth();
    int getBoardHeight();
    void getBoardState();
    char boardState[9][4] = {};
    char getBoardCoordinates(int row, int col);
    void setBoardCoordinates(int row, int col, char value);

  private:
    int boardWidth = 4;
    int boardHeight = 9;
    void setupBoard();
    void setCode();
};

#endif // BOARD_H
