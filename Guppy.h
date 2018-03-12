#ifndef GUPPY_H
#define GUPPY_H

#define Kecil 1
#define Sedang 2
#define Besar 3

#include "Ikan.h"
#include <iostream>

using namespace std;

class Guppy
{
private:
	int growthStage;


public:
	Guppy(int a, int b);


	~Guppy();
	
};

#endif