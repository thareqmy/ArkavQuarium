#ifndef IKAN_H
#define IKAN_H

#define HadapLeft 1
#define HadapRight 0

#include <iostream>
#include "Benda.h"

using namespace std;

class Ikan : public Benda, public MahlukHidup{
protected:
	Koin producedCoin;
	//Muka ikan menghadap kemana
	int FaceDIrection;
	//Jumlah makanan yang sudah dimakan
	int countFood;
	
public:
	// a untuk x, b untuk y, s untuk speed dan v untuk value koin, memanggil Benda(x,y,s)
	Ikan(int a, int b, int s, int v);
	//Prosedur untuk ikan mencari makanan
	virtual ~Ikan();
	
	//Melakukan abstract data tipe untuk nextTurn
	virtual void nextTurn(LinkedList<Guppy>&, LinkedList<Piranha>&, LinkedList<Food>&, LinkedList<Coin>&, Snail&) = 0;
    //Method untuk move disaa ikan bergerak bebas
    void move();
    //Melakukan producsi koin terkait
    void produceCoin(LinkedList<Coin> &coins);
	
};

#endif
