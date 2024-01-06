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
    Board* board = new Board();
    std::cout << "Board height = " << board->getBoardHeight() << std::endl;
    std::cout << "Board width = " << board->getBoardWidth() << std::endl;
    board->getBoardState();

    std::cout << "Adding 'O' to board' at 5,3" << std::endl;
    board->setBoardCoordinates(5,3,'O');
    board->getBoardState();

    std::cout << "Adding 'X' to board' at 7,1" << std::endl;
    board->setBoardCoordinates(7,1,'X');
    board->getBoardState();

    std::cout << "Checking board coordinates, expecting blank: " << board->getBoardCoordinates(1,2) << std::endl;
    std::cout << "Checking board coordinates, expecting O: " << board->getBoardCoordinates(5,3) << std::endl;
    std::cout << "Checking board coordinates, expecting X: " << board->getBoardCoordinates(7,1) << std::endl;
    delete board;
    //---------------------------------------
    // END BOARD TEST
  }

  MenuUI menuUI = MenuUI();
  menuUI.ShowWelcome();

  // Start Game loop
  Board* board = new Board();
  menuUI.StartGame();
  board->getBoardState();

  // Make first guess
  std::vector<char> userGuess = menuUI.TakeGuess();
  for(int i=0; i < (int)userGuess.size(); i++)
  {
    std::cout << userGuess[i];
  }
  board->setGuess(userGuess, 1);
  board->getBoardState();
  // guess 2
  userGuess = menuUI.TakeGuess();
  board->setGuess(userGuess, 2);
  board->getBoardState();

  return 0;
}
