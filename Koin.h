#ifndef KOIN_H
#define KOIN_H

#define KoinSpeed 1
#include "Benda.h"
#include <iostream>

using namespace std;

class Koin : public Benda {
	public :
		Koin();
		Koin(int,int);//x,y lalu memanggil Benda(x,y,KoinSpeed)
		~Koin(); // Koin akan hancur jika dimakan oleh siput

		bool operator == (const Koin&);
		
		void setValue(int);
		int getValue() const;
		// inisiasi untuk koin
		void nextTurn(LinkedList<Guppy>&, LinkedList<Piranha>&, LinkedList<MakananIkan>&, LinkedList<Koin>&, Siput&);
    	//bergerak kebawah sesuai koin
    	void move();
	private :
		int value;
	
};

#endif
