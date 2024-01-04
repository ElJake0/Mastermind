#ifndef MENUUI_H
#define MENUUI_H

#include "Tools.h"

class MenuUI {
  public:
  void showWelcome();
  void startGame();

  private:
  std::string welcome;
};

#endif