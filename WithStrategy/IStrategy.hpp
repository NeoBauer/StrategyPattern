#pragma once 
class IStrategy {

public:
virtual ~IStrategy(){};
virtual void Attack() = 0;

};