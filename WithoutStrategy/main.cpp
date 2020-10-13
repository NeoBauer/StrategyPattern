#include "GameWithoutStrategy.hpp"
#include <iostream>
#include <string>
#include <vector>

int main() {

  std::vector<std::pair<std::string, int>> enumMap = {{"Phalanga", 1},
                                                  {"Testudo", 2},
                                                  {"AllRoundDefence", 3},
                                                  {"SaveYourself", 4}};

  std::cout << "You are Poncius Cpplius, and now it is time for a battle.\nYou "
               "are under attack in Teutoburg forest.\n";
  std::cout << "There is no chance to retreat.\n\n";
  std::cout << "Available options: \n\n";

  for (const auto &[text, value] : enumMap) {
    std::cout << value << '.' << text << '\n';
  }
  std::cout << "\nChoose your attack strategy: ";
  int strategy{};
  std::cin >> strategy;
  Game battle{};

  switch (strategy) {
  case 1:
    battle.SaveYourself();
    break;
  case 2:
    battle.AllRoundDefence();
    break;
  case 3:
    battle.Testudo();
    break;
  case 4:
    battle.Phalanga();
    break;
  default:
    battle.RunAway();
  }
  return 0;
};