#ifndef MENUUI_H
#define MENUUI_H

#include "Tools.h"

class MenuUI {
  public:
  void showWelcome();
  
  // Player name messages
  void showEnterName();
  void showConfirmName();
  void setName(std::string name);
  std::string getName();

  private:
  // Player name messages
  std::string welcome;
  std::string enterName;
  std::string confirmName;
};

#endif