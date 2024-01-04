#include "Board.h"
#include <iostream>

int main()
{
  std::cout << "RUNNING MAIN" << std::endl;

  // BOARD TEST
  //---------------------------------------
  std::cout << "Board test" << std::endl;
  Board board = Board();
  std::cout << "Board height = " << board.getBoardHeight() << std::endl;
  std::cout << "Board width = " << board.getBoardWidth() << std::endl;
  board.getBoardState();

  std::cout << "Adding 'O' to board' at 5,3" << std::endl;
  board.setBoardCoordinates(5,3,'O');
  board.getBoardState();

  std::cout << "Adding 'O' to board' at 7,1" << std::endl;
  board.setBoardCoordinates(7,1,'O');
  board.getBoardState();

  std::cout << "Checking board coordinates, expecting X: " << board.getBoardCoordinates(1,2) << std::endl;
  std::cout << "Checking board coordinates, expecting O: " << board.getBoardCoordinates(5,3) << std::endl;
  std::cout << "Checking board coordinates, expecting O: " << board.getBoardCoordinates(7,1) << std::endl;
  //---------------------------------------
  // END BOARD TEST

  return 0;
}
