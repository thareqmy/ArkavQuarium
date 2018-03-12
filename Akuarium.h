#ifndef AKUARIUM_H
#define AKUARIUM_H

#include <iostream>

using namespace std;

class Akuarium {
private:
	LinkedList<Ikan> fishes;
	LinkedList<MakananIkan> foods;
	LinkedList<Koin> coins;
	
	
	int size;


public:
	 Akuarium();
	~Akuarium();


};

#endif
