#ifndef IKAN_H
#define IKAN_H

#define HadapLeft 1
#define HadapRight 0

#include <iostream>
#include "Benda.h"

using namespace std;

class Ikan
: public Benda{
protected:
	//Waktu Ikan bergerak bebas setelah makan
	const int fullTimer;
	//Waktu Ikan mencari makanan
	const int starveTimer;
	//Koin yang dihasilkan ikan
	Koin producedCoin;
	//Muka ikan menghadap kemana
	int FaceDIrection;
	//Jumlah makanan yang sudah dimakan
	int countFood;
	
public:
	// a untuk x, b untuk y, s untuk speed dan akan memanggil ctor Benda
	Ikan(int a, int b, int s);
	//Prosedur untuk ikan mencari makanan
	void catchFood();
	//proseduc untuk ikan menghasilkan koin
	void producedCoin();

	~Ikan();
	
};

#endif
