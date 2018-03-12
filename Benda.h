#ifndef BENDA_H
#define BENDA_H

#define Up 1
#define Down 2
#define Right 3
#define Left 4
#define UpRight 5
#define UpLeft 6
#define DownRight 7
#define DownLeft 8


#include <iostream>

using namespace std;

class Benda
{

protected:
	//absis
	int x;
	//ordinat
	int y;
	//kecepatan benda
	int speed;

public:
	 Benda();
	 //Inisiasi a untuk x, b untuk y, s untuk speed
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
