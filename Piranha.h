#ifndef PIRANHA_H
#define PIRANHA_H

#define SpeedPiranha 3;
#define KoinPiranha 25;

#include "Ikan.h"
#include <iostream>

using namespace std;

class Piranha : public Ikan {
	public:
		//x,y memanggil Ikan(x,y,SpeedPiranha, KoinPiranha)
		Piranha(int,int);
		~Piranha();
		//menghasilkan guppy terdekat
		Guppy getGuppyTerdekat(const LinkedList<Guppy> &listGuppy) const;
		//Piranha bergerak kearah gupppy terdekat lalu memakan bila koordinat sesuai
		void findGuppy(LinkedList<Guppy> &listGuppy, Guppy &guppy);
		//Piranha melakukan nextturn dan bergerak sesuai kondisi
		void nextTurn(LinkedList<Guppy>&, LinkedList<Piranha>&, LinkedList<MakananIkan>&, LinkedList<Koin>&, Siput&);
	
		bool operator == (const Piranha&);
	private :
};

#endif
