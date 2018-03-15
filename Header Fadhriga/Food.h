#ifndef FOOD_H
#define FOOD_H

#define foodSpeed = 1

#include <iostream>

using namespace std;

class Food : public Object {
  public :
    Food(int,int); //x,y
    ~Food();

  void nextTurn(LinkedList<Guppy>&, LinkedList<Piranha>&, LinkedList<Food>&, LinkedList<Coin>&, Snail&);
  void move();

  bool operator==(const Food&);
}
