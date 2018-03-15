#ifndef COIN_H
#define COIN_H

#define coinSpeed = 1

#include <iostream>

using namespace std;

class Coin : public Object {
  private :
    int value;

  public :
    Coin(int,int); //x,y
    ~Coin();

    void getValue() const;
    void setValue(int);
    void nextTurn(LinkedList<Guppy>&, LinkedList<Piranha>&, LinkedList<Food>&, LinkedList<Coin>&, Snail&);
    void move();

    bool operator==(const Coin&);
};

#endif
