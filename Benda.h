#ifndef BENDA_H
#define BENDA_H

#include "

#include <iostream>

using namespace std;


class Benda { 
  private: 
    int x; 
    int y; 
    int speed; 

  public: 
    Benda(int,int,int); 
    virtual ~Benda(); 

    void setX(int); 
    void setY(int); 
    void setSpeed(int); 
    void getX() const; 
    void getY() const; 
    void getSpeed() const; 

    void moveUp(); 
    void moveDown(); 
    void moveRight(); 
    void moveLeft(); 

    virtual void move() = 0; 
    virtual void nextTurn(LinkedList<Guppy>&, LinkedList<Piranha>&,LinkedList<MakananIkan>&,LinkedList<Koin>&,Siput&) = 0; 
}; 

#endif
