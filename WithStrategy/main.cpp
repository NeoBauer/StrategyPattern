#include "BattleWithStrategy.hpp"
#include "StrategyAllRoundDefence.hpp"
#include "StrategyPhalanga.hpp"
#include "StrategyRunAway.hpp"
#include "StrategySaveYourself.hpp"
#include "StrategyTestudo.hpp"
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

  switch (strategy) {
  case 1: {
    StrategyPhalanga *PhStrategy = new StrategyPhalanga;
    Battle *newBattle = new Battle(PhStrategy);
    newBattle->Fight();
    break;
  }
  case 2: {
    StrategyTestudo *TStrategy = new StrategyTestudo;
    Battle *newBattle = new Battle(TStrategy);
    newBattle->Fight();
  }
  case 3: {
    StrategyAllRoundDefence *ALRStrategy = new StrategyAllRoundDefence;
    Battle *newBattle = new Battle(ALRStrategy);
    newBattle->Fight();
    break;
  }
  case 4: {
    StrategySaveYourself *SYStrategy = new StrategySaveYourself;
    Battle *newBattle = new Battle(SYStrategy);
    newBattle->Fight();
    break;
  }
  default: {
    StrategyRunAway *RAStrategy = new StrategyRunAway;
    Battle *newBattle = new Battle(RAStrategy);
    newBattle->Fight();
    break;
  }
  }

  return 0;
};