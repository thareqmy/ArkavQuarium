#ifndef AKUARIUM_H 
#define AKUARIUM_H 

#include "Benda.h"
#include "MakhlukHidup.h"
#include "LinkedList.h"
#include <iostream> 

using namespace std; 

class Akuarium {
  private:
    LinkedList<Guppy> listGuppy;
    LinkedList<Piranha> listPiranha;
    LinkedList<MakananIkan> listMakananIkan;
    LinkedList<Koin> listKoin;
    Siput siput;
    int putaran;

  public:
    Akuarium();
    Akuarium(const Akuarium&);
    Akuarium& operator=(const Akuarium&);
    ~Akuarium();

    //Menambah putaran lalu melakukan method nextTurn ke seluruh benda yang ada di akuarium
    void nextTurn();
    //Melakukan penambahan guppy di akuarium
    void operator<<(const Guppy &guppy);
    //Melakukan penambahan piranha di akuarium
    void operator<<(const Piranha &piranha);
    //Melakukan penambahan makananikan di akuarium
    void operator<<(const MakananIkan &makananIkan);
    //Melakukan penambahan nextturn
    void operator++();
};

#endif

#endif
