#ifndef KOIN_H
#define KOIN_H

#include <iostream>

using namespace std;

class Koin : public Benda {
	public :
		Koin();
		Koin(int,int,int);
		~Koin(); // Koin akan hancur jika dimakan oleh siput

		bool operator == (const Koin&);
		void moveDown();
		void setValue(int);
		int getValue() const;
	private :
		int value;
	
};

#endif
