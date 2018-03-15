#ifndef AQUARIUM_H
#define AQUARIUM_H

#include <iostream>

using namespace std;

class Aquarium {
  private:
    LinkedList<Guppy> guppies;
    LinkedList<Piranha> piranhas;
    LinkedList<Food> foods;
    LinkedList<Coin> coins;
    Snail snail;

  public:
    Aquarium();
    Aquarium(const Akuarium&);
    Aquarium& operator=(const Aquarium&);
    ~Akuarium();

    void nextTurn();

    void operator<<(Guppy &guppy);
    void operator<<(Piranha &piranha);
    void operator<<(Food &food);
    void operator<<(Coin &coin);
    void operator++();
};

#endif
