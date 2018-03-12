#ifndef AKUARIUM_H
#define AKUARIUM_H

#include <iostream>

using namespace std;

class Akuarium {
//Implementasi class yang memiliki atribut-atribut yang ada di akuarium	
private:
	//Atribut yang berisikan kumpulan ikan yang ada di akuarium
	LinkedList<Ikan> fishes;
	//Kumpulan makanan yang ada di akuarium
	LinkedList<MakananIkan> foods;
	//Kumpulan Koin yang ada di akuarium
	LinkedList<Koin> coins;
	
	//Ukuran Aquarium
	int x, y;


public:
	 Akuarium();
	~Akuarium();


};

#endif
