#include "Board.h"

Board::Board()
{
  std::cout << "Constructing Board()" << std::endl;
  setupBoard();
}

Board::~Board()
{
  std::cout << "Destructing Board()" << std::endl;
}

int Board::getBoardWidth(){ return boardWidth; }
int Board::getBoardHeight(){ return boardHeight; }

void Board::getBoardState()
{
  for(int row = 0; row < getBoardHeight(); row++)
  {
    for(int col = 0; col < getBoardWidth(); col++)
    {
      std::cout << "[" << boardState[row][col] << "]";
    }
    std::cout << std::endl;
  }
}

void Board::setupBoard(){
  for(int row = 0; row < getBoardHeight(); row++)
  {
    for(int col = 0; col < getBoardWidth(); col++)
    {
      boardState[row][col] = 'X';
    }
  }
}

void Board::setBoardCoordinates(int row, int col, char value){
  boardState[row][col] = value;
}

char Board::getBoardCoordinates(int row, int col){
  return boardState[row][col];
}
