#ifndef MAKANANIKAN_H
#define MAKANANIKAN_H

#include "Benda.h"
#include <iostream>
#define MakananIkanSpeed 1


using namespace std;

class MakananIkan : public Benda {
	public :
		MakananIkan();
		MakananIkan(int); // x dengan y 0, memanggil Benda(x,0,MakananIkanSpeed)
		~MakananIkan();
		//inisiasi nextTurn MakananIkan
		void nextTurn(LinkedList<Guppy>&, LinkedList<Piranha>&, LinkedList<MakananIkan>&, LinkedList<Koin>&, Siput&);

		bool operator == (const MakananIkan&);
		
		//Untuk Move MakananIkan kebawah
		void move();
	private :
};

#endif
