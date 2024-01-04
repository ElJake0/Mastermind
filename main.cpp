#include "Initialise.h"

int main(int argc, char* argv[])
{
  std::string argument;
  std::cout << "RUNNING MAIN" << std::endl;

  if(argc > 1)
  {
    argument = argv[1];
  }

  if(argument == "test")
  {
    // BOARD TEST
    //---------------------------------------
    std::cout << "Board test" << std::endl;
    Board testBoard = Board();
    std::cout << "Board height = " << testBoard.getBoardHeight() << std::endl;
    std::cout << "Board width = " << testBoard.getBoardWidth() << std::endl;
    testBoard.getBoardState();

    std::cout << "Adding 'O' to board' at 5,3" << std::endl;
    testBoard.setBoardCoordinates(5,3,'O');
    testBoard.getBoardState();

    std::cout << "Adding 'X' to board' at 7,1" << std::endl;
    testBoard.setBoardCoordinates(7,1,'X');
    testBoard.getBoardState();

    std::cout << "Checking board coordinates, expecting X: " << testBoard.getBoardCoordinates(1,2) << std::endl;
    std::cout << "Checking board coordinates, expecting O: " << testBoard.getBoardCoordinates(5,3) << std::endl;
    std::cout << "Checking board coordinates, expecting O: " << testBoard.getBoardCoordinates(7,1) << std::endl;
    //---------------------------------------
    // END BOARD TEST
  }

  MenuUI menuUI = MenuUI();
  menuUI.showWelcome();

  // Start Game loop
  menuUI.startGame();
  

  return 0;
}
