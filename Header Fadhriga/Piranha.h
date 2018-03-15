#ifndef PIRANHA_H
#define PIRANHA_H

#define speedPiranha = 3;
#define coinPiranha = 25;

#include "Fish.h"
#include <iostream>

using namespace std;

class Piranha : public Fish {
	public :
		Piranha(int,int); //x,y
		~Piranha();

		Guppy getNearestGuppy(const LinkedList<Guppy> &guppies);
		void findGuppy(LinkedList<Guppy> &guppies, Guppy &guppy);
		void nextTurn(LinkedList<Guppy>&, LinkedList<Piranha>&, LinkedList<Food>&, LinkedList<Coin>&, Snail&);

		bool operator==(const Piranha&);
};

#endif
