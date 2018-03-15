#ifndef NODE_H
#define NODE_H

#include <iostream>

using namespace std;

template <class T>
class Node
//Class yang merupakan kesatuan elemen yang ada di linkedlist
{
private:
	T infoNode;
	//Jenis infoNode yg disimpan di node
	Node* next;
	//Pointer menuju node selanjutnya

public:
	friend class Linkedlist;
	Node<T>(){
		next = NULL;

	}


	~Node<T>(){
		delete next;
	}
	
};

#endif