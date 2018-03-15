#ifndef BENDA_H
#define BENDA_H

#include <iostream>

using namespace std;

class Benda
{

protected:
	int x;
	int y;

public:
	 Benda();
	 Benda(int a, int b);

	 //SETTER&GETTER
	 void setX(int a);
	 void setY(int b);

	 int getX() const;
	 int getY() const;

	 void moveUp();
	 void moveDown();
	 void moveRight();
	 void moveLeft();

	 void moveUpRight();
	 void moveUpLeft();
	 void moveDownRight();
	 void moveDownLeft();

	 bool operator==(const BendaAir& b) const;

	
};

#endif