#ifndef BENDA_H
#define BENDA_H

#include <iostream>

using namespace std;

class Benda
{

protected:
	int x;
	int y;
	int speed;

public:
	 Benda();
	 Benda(int a, int b, int s);

	 //SETTER&GETTER
	 void setX(int a);
	 void setY(int b);
	 void setSpeed(int s);

	 int getX() const;
	 int getY() const;
	 int getSpeed() const;

	 void move(int movement);

	 void moveUp();
	 void moveDown();
	 void moveRight();
	 void moveLeft();

	 void moveUpRight();
	 void moveUpLeft();
	 void moveDownRight();
	 void moveDownLeft();

	 bool operator==(const Benda& b) const;

	
};

#endif