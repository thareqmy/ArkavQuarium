#ifndef GUPPY_H
#define GUPPY_H

#define Kecil 1
#define Sedang 2
#define Besar 3

#include "Ikan.h"
#include <iostream>

using namespace std;

class Guppy : public Ikan {
	public :
		Guppy();
		Guppy(int,int);
		~Guppy();
		bool operator == (const Guppy&);
		void makan();
		// void gerak();
		void setFase(int);
		void nextFase();
		void setFrekuensiMakan(int);
		int getFase() const;
		int getFrekuensiMakan() const;
		Koin buatKoin();
		MakananIkan getMakananIkanTerdekat(LinkedList<MakananIkan>);
	private :
		int fase;
		int frekuensimakan; // jika sudah x kali makan akan membesar
};

#endif
