#ifndef IKAN_H
#define IKAN_H

#define HadapLeft 1
#define HadapRight 0

#include <iostream>
#include "Benda.h"

using namespace std;

class Ikan
: public Benda{
protected:
	const int fullTimer;
	const int starveTimer;
	const int producedCoin;
	int FaceDIrection;
	int countFood;
	
public:
	Ikan(int a, int b, int s);
	void eat(MakananIkan& m) = 0;
	void catchFood();
	void producedCOin() = 0;

	~Ikan();
	
};

#endif