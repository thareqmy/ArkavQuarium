#ifndef PIRANHA_H
#define PIRANHA_H

#include "Ikan.h"
#include <iostream>

using namespace std;

class Piranha : public Ikan {
	public:
		Piranha();
		Piranha(int,int);
		~Piranha();
		bool operator == (const Piranha&);
		// void gerak();
		void makan();
		Guppy getGuppyTerdekat(LinkedList<Guppy>);
		Koin buatKoin();
	private :
};

#endif
