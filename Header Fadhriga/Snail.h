#ifndef SNAIL_H
#define SNAIL_H

#define speedSnail = 2;

#include <iostream>

using namespace std;

class Snail : public Object {
  public :
  Snail(int,int); //x,y
  ~Snail();

  void nextTurn(LinkedList<Guppy>&, LinkedList<Piranha>&, LinkedList<Food>&, LinkedList<Coin>&, Snail&);
  void move();

  bool operator==(const Snail&);
}
