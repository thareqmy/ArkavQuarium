#ifndef FISH_H
#define FISH_H

#define faceLeft 1
#define faceRight 0

#include <iostream>
#include "Object.h"

using namespace std;

class Fish : public Object {
  private:
    int direction;
    int countFood;
    int status;
    Koin producedCoin;

    const int fullTimer;
    const int starveTimer;

  public:
    Fish(int,int,int,int) //x,y,speed,value
    virtual ~Fish();

    virtual void nextTurn(LinkedList<Guppy>&, LinkedList<Piranha>&, LinkedList<Food>&, LinkedList<Coin>&, Snail&) = 0;
    void move();
    void produceCoin(LinkedList<Coin> &coins);
};

#endif
