#ifndef AKUARIUM_H
#define AKUARIUM_H

#include <iostream>

using namespace std;

class Akuarium {
//Implementasi class yang memiliki atribut-atribut yang ada di akuarium
private:
	//Atribut yang berisikan kumpulan ikan yang ada di akuarium
	LinkedList<Ikan> listIkan;
	//Kumpulan makanan yang ada di akuarium
	LinkedList<MakananIkan> listMakanan;
	//Kumpulan Koin yang ada di akuarium
	LinkedList<Koin> listKoin;

	//Ukuran Aquarium
	int x, y;

public:
	// Konstruktor
	Akuarium();
	Akuarium(const Akuarium&);
	// Destruktor
	~Akuarium();
	// Assign
	Akuarium& operator=(const Akuarium&);

	// Method Function
	void nextTurn();
};

#endif
