#ifndef GUPPY_H
#define GUPPY_H

#define Small 1
#define Medium 2
#define Large 3

#define guppySpeed = 4
#define coinSmall = 5
#define coinMedium = 10
#define coinLarge = 15

#include "Fish.h"
#include <iostream>

using namespace std;

class Guppy : public Fish {
	private :
		int fase;
		int foodCapacity;

	public :
		Guppy(int,int,int); //x,y,foodCapacity
		~Guppy();

		void setFase(int);
		int getFase() const;
		void setCapacity(int);
		int getCapacity() const;

		Food getNearestFood(const LinkedList<Food> &foods);
		void findFood(LinkedList<Food> &foods, Food &targetFood);
		void nextFase();
		Koin produceCoin();
		void nextTurn(LinkedList<Guppy>&, LinkedList<Piranha>&, LinkedList<Food>&, LinkedList<Coin>&, Snail&);

		bool operator==(const Guppy&);
};

#endif
