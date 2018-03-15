#ifndef GUPPY_H
#define GUPPY_H

#define Kecil 1
#define Sedang 2
#define Besar 3

#define GuppySpeed 4
#define KoinKecil 5
#define KoinSedang 10
#define KoinBesar 15

#include "Ikan.h"
#include <iostream>

using namespace std;

class Guppy : public Ikan {
	public :
		//x,y, food capacity
		Guppy(int,int,int);
		~Guppy();
		bool operator == (const Guppy&);
		// v
		void setFase(int);
		int getFase() const;
		void setFrekMakan(int);
		int getFrekMakan() const;
		//Mengubah fase ikan menjadi lebih besar bila sudah makan menyentu frekmakan
		void nextFase();

		//Mencari makanan ikan terdekat di suatu linkedlist makananikan
		MakananIkan getMakananIkanTerdekat(LinkedList<MakananIkan>& listMakananIkan, MakananIkan& target);
		//Guppy mbergerak menuju makanan terdekat dan memakan bila koordinat makanan dan guppy sesuai
  		void findFood(LinkedList<MakananIkan>& listMakananIkan, MakananIkan& target);
  		//Inisiasi next turn untuk guppy	
		void nextTurn(LinkedList<Guppy>&, LinkedList<Piranha>&, LinkedList<MakananIkan>&, LinkedList<Koin>&, Siput&);

	private :
		int fase;
		int frekMakan;
};

#endif
