#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"
#include <iostream>

using namespace std;

template <class T>
class LinkedList
//Class yang merupakan implementasi linkedlist
{
private:
	Node<T> *head, *tail;

public:
	LinkedList<T>() {
		head = NULL;
		tail = NULL;
	}

	~LinkedList<T>() {
		Node<T> *temp = head;
		while(temp != NULL)
		{
			temp = temp->next;
			delete(head); 
			head = temp;
		}
	}

	int find(T element) const{
	//Method untuk mendapatkan indeks suatu element di list
		Node<T>* temp = head;
		int indek = 0;
		while ((temp != NULL) && (temp->infoNode != element)) {
			temp = temp->next;
			indek++;
		}
		if (temp->infoNode == element) {
			return indek;
		} else {
			return -1;
		}
	}

	bool isEmpty() const{
		return ((head==NULL) && (tail == NULL));
	}

	void add(T element){
		Node<T>* temp = new Node<T>;
		temp->infoNode = element;
		if (isEmpty()) {
			head = temp;
			tail = temp;
		} else {
			tail->next = temp;
			tail = temp;
		}
	}

	void remove(T element){
		Node<T>* temp = head;
		if (find(element) == -1){

		} else {
			if (head == tail) {
				head = NULL;
				tail = NULL;
			} else if (head->infoNode == element){
				head = head->next;
			} else {
				temp = head->next;
				Node<T>* prec = new Node<T>;
				prec = head;
				while (temp->infoNode != element) {
					temp = temp->next;
					prec = prec->next;
				}
				if (tail == temp) {
					tail = prec;
				} else {
					prec->next = temp->next;
				}

			}
			delete(temp);
		}
	}
	T get(int index) const{
		int count = 0;
		Node<T>* temp = head;

		while(count < index) {
			temp = temp->next;
			count++;
		}
		return temp->infoNode;
	}

	void print() {
		if (isEmpty()) {
			cout << "LIST KOSONG" << endl;
		} else {
			Node<T>* temp = head;
			while (temp->next != NULL) {
				cout << temp->infoNode << " ->";
				temp = temp->next;
			}
			cout << temp->infoNode << endl;
		}
	} 
};

#endif