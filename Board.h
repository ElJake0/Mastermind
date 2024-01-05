#ifndef BOARD_H
#define BOARD_H

#include "Tools.h"

class Board
{
  public:
    Board();
    ~Board();

    int getBoardWidth();
    int getBoardHeight();
    void getBoardState();
    std::vector<std::vector<char>> boardState;
    char getBoardCoordinates(int row, int col);
    void setBoardCoordinates(int row, int col, char value);

  private:
    int boardWidth = 4;
    int boardHeight = 9;
    void setupBoard();
    void setCode();
};

#endif // BOARD_H
