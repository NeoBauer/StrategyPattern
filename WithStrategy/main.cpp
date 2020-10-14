#include "BattleWithStrategy.hpp"
#include "IStrategy.hpp"
#include "StrategyAllRoundDefence.hpp"
#include "StrategyPhalanga.hpp"
#include "StrategyRunAway.hpp"
#include "StrategySaveYourself.hpp"
#include "StrategyTestudo.hpp"
#include <iostream>
#include <map>
#include <string>
#include <unordered_map>
#include <vector>

int main() {

  std::map<std::pair<int, std::string>, IStrategy *> StrategyMap = {
      {{1, "Phalanga"}, new StrategyPhalanga},
      {{2, "Testudo"}, new StrategyTestudo},
      {{3, "AllRoundDefence"}, new StrategyAllRoundDefence},
      {{4, "SaveYourself"}, new StrategySaveYourself}};

  std::cout << "You are Poncius Cpplius, and now it is time for a battle.\nYou "
               "are under attack in Teutoburg forest.\n";
  std::cout << "There is no chance to retreat.\n\n";
  std::cout << "Available options: \n\n";

  for (const auto &[key, strategy] : StrategyMap) {
    std::cout << key.first << '.' << key.second << '\n';
  }
  std::cout << "\nChoose your attack strategy: ";
  int ChoosenStrategy{};
  std::cin >> ChoosenStrategy;

  for (auto &[key, strategy] : StrategyMap) {

    if (ChoosenStrategy == key.first) {
      Battle *newBattle = new Battle(strategy);
      newBattle->Fight();
    }
  }

  return 0;
};