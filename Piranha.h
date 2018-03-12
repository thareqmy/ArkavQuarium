#ifndef PIRANHA_H
#define PIRANHA_H

#include "Ikan.h"
#include <iostream>

using namespace std;

class Piranha : public Ikan
{
public:
	//a untuk koordinat x, b untuk koordinat y, s untuk speed
	Piranha(int a, int b, int s); //: Benda(a,b,s)
	~Piranha();
	
};

#endif
