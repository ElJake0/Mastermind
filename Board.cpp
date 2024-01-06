#include "Board.h"
#include "Node.h"

Board::Board()
{
  std::cout << "Constructing Board()" << std::endl;
  setupBoard();
  setCode();
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
  std::cout << "SETTING UP BOARD" << std::endl;
  boardState.resize(getBoardHeight());
  for(int row = 0; row < getBoardHeight(); row++)
  {
    boardState.at(row).resize(getBoardWidth());
    for(int col = 0; col < getBoardWidth(); col++)
    {
      boardState[row][col] = EMPTY;
    }
  }
}

void Board::setCode(){
  // Placeholder for setting the board code
  char colour[4] = {GREEN, RED, BLUE, PURPLE};
  boardState[0][0] = colour[0];
  boardState[0][1] = colour[1];
  boardState[0][2] = colour[2];
  boardState[0][3] = colour[3];
}

void Board::setGuess(std::vector<char> guess, int attempt){
  boardState[attempt][0] = guess[0];
  boardState[attempt][1] = guess[1];
  boardState[attempt][2] = guess[2];
  boardState[attempt][3] = guess[3];
}

void Board::setBoardCoordinates(int row, int col, char value){
  boardState[row][col] = value;
}

char Board::getBoardCoordinates(int row, int col){
  return boardState[row][col];
}
