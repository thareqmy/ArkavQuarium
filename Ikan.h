#ifndef IKAN_H
#define IKAN_H

#define HadapLeft 1
#define HadapRight 0

#include <iostream>
#include "BendaAir.h"

using namespace std;

class Ikan
: public Benda{
private:
	const int waktuKenyang;
	const int waktuLapar;
	int mukaMenghadap;
	int countMakanan;
	
public:
	 Ikan();
	~ Ikan();
	
};

#endif