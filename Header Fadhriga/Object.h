#ifndef OBJECT_H
#define OBJECT_H

#include <iostream>

using namespace std;

class Object {
  private:
    int x;
    int y;
    int speed;

  public:
    Object(int,int,int); // x,y,speed
    virtual ~Object();

    void setX(int);
    void setY(int);
    void setSpeed(int);
    void getX() const;
    void getY() const;
    void getSpeed() const;

    void moveUp(); void moveDown(); void moveRight(); void moveLeft();

    virtual void nextTurn() = 0;
    virtual void move() = 0;
};

#endif
