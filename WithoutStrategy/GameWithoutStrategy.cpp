#include "GameWithoutStrategy.hpp"
#include <iostream>
#include <random>  
#include <chrono>
#include <thread>  

void Game::SaveYourself(){

    using namespace std::chrono_literals; // ns, us, ms, s, h, etc.

    std::cout << "Your people are fighting like hell using everyting, what they got!\n"
    << "Wait for results of battle...\n";
    std::this_thread::sleep_for(3s);
    std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<std::mt19937::result_type> dist01(0,1); // distribution in range [0, 1]
    if(dist01(rng)){
        std::cout << "You lose!\n";
    }else std::cout << "You won!\n"; 
}

void Game::AllRoundDefence(){

    using namespace std::chrono_literals; // ns, us, ms, s, h, etc.

    std::cout << "Back, to back, fighting all together, to the end!\n"
    << "Wait for results of battle...\n";
    std::this_thread::sleep_for(3s);
    std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<std::mt19937::result_type> dist01(0,1); // distribution in range [0, 1]
    if(dist01(rng)){
        std::cout << "You lose!\n";
    }else std::cout << "You won!\n"; 
}
void Game::Testudo(){

    using namespace std::chrono_literals; // ns, us, ms, s, h, etc.

    std::cout << "All shields up! Shell hard as turtle's!\n"
    << "Wait for result of battle...\n";
    std::this_thread::sleep_for(3s);
    std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<std::mt19937::result_type> dist01(0,1); // distribution in range [0, 1]
    if(dist01(rng)){
        std::cout << "You lose!\n";
    }else std::cout << "You won!\n"; 
}
void Game::Phalanga(){

    using namespace std::chrono_literals; // ns, us, ms, s, h, etc.

    std::cout << "Arm, to arm, line with vanishing end!\n"
    << "Wait for result of battle...\n";
    std::this_thread::sleep_for(3s);
    std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<std::mt19937::result_type> dist01(0,1); // distribution in range [0, 1]
    if(dist01(rng)){
        std::cout << "You lose!\n";
    }else std::cout << "You won!\n"; 
}
void Game::RunAway(){

    using namespace std::chrono_literals; // ns, us, ms, s, h, etc.

    std::cout << "Your people without commands are running away!\n"
    << "Wait for result of battle...\n";
    std::this_thread::sleep_for(3s);
    std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<std::mt19937::result_type> dist01(0,1); // distribution in range [0, 1]
    if(dist01(rng)){
        std::cout << "You lose!\n";
    }else std::cout << "You won!\n"; 
}

