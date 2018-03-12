#ifndef MAKANANIKAN_H
#define MAKANANIKAN_H

#include <iostream>

using namespace std;

class MakananIkan : public Benda {
	public :
		MakananIkan();
		MakananIkan(int,int);
		~MakananIkan();

		bool operator == (const MakananIkan&);
		void moveDown();
	private :
};

#endif
