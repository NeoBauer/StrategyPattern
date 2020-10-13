#pragma once
#include "IStrategy.hpp"
class Battle{

public: 
Battle(IStrategy* ChooseStrategy = nullptr) : 
ChoosenStrategy_(ChooseStrategy){};

~Battle(){
    delete ChoosenStrategy_;
}
void setStrategy(IStrategy* newStrategy) {
 delete this->ChoosenStrategy_;
        this->ChoosenStrategy_ = newStrategy;
}
void Fight(){
    this->ChoosenStrategy_->Attack();
}
private:

IStrategy* ChoosenStrategy_;

};