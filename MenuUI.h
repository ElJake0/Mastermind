#ifndef MENUUI_H
#define MENUUI_H

#include "Tools.h"
#include <sstream>

class MenuUI {
  public:
  void ShowWelcome();
  void StartGame();
  std::vector<char> TakeGuess();

  private:
  std::string welcome;
};

#endif