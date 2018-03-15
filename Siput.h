#ifndef SIPUT_H
#define SIPUT_H

#define SpeedSiput 2;

#include "Benda.h"
#include <iostream>

using namespace std;

class Siput : public Benda{
public:
	Snail(int,int); //x,y Panggil Benda(x,y,SpeedSnail)
  	~Snail();

  	//Inisiasi nextTurn untuk siput
  	void nextTurn(LinkedList<Guppy>&, LinkedList<Piranha>&, LinkedList<Food>&, LinkedList<Coin>&, Snail&);
  	//Menghasilkan koin terdekat secara jarak dari siput
  	Koin getKoinTerdekat(const LinkedList<Koin> &listKoin) const;
	//Siput bergerak kearah koin terdekat lalu mengambil koin bila koordinat sesuai
	void findKoin(LinkedList<Koin> &listKoin, Koin &koin);

  	bool operator==(const Siput&);
	
};

#endif