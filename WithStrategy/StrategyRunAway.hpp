#pragma once 
#include "IStrategy.hpp"
#include <chrono>
#include <iostream>
#include <random>
#include <thread>

class StrategyRunAway : public IStrategy {

  void Attack() override {

    using namespace std::chrono_literals; // ns, us, ms, s, h, etc.

    std::cout << "Your people without commands are running away!\n"
              << "Wait for result of battle...\n";
    std::this_thread::sleep_for(3s);
    std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<std::mt19937::result_type> dist01(
        0, 1); // distribution in range [0, 1]
    if (dist01(rng)) {
      std::cout << "You lose!\n";
    } else
      std::cout << "You won!\n";
  }
};