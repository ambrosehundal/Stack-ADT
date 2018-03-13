#pragma once
#ifndef STACK_H
#define STACK_H
#include "LinkedList.h"


template <class T>
class Stack : protected LinkedList<T> {

private:
	Node<T>* top;

public:
	Stack();
	~Stack();

	bool isEmpty();
	bool push(T entry);
	bool pop();
	//int getSize();
	void clear();
	

};

//implementation does not go inside class scope, change on other files as well


/******************************************
* Stack();
* constructor
*/
template <class T>
Stack<T>::Stack() {

	LinkedList<T>();
}


/******************************************
* Stack();
* destructor
*/
template <class T>
Stack<T>::~Stack() {
	clear();
}


/******************************************
* bool push()
* pushes an entry onto the stack
*/
template <class T>
bool Stack<T>::push(T entry) {
 	int len = this->getSize();
	try {
		this->insertNode(entry, len - 1);
		return true;
	}
	catch (...) {
		cout << "Could not push ..." << endl;
		return false;
	}
}


/******************************************
* bool pop()
* pops an entry off the stack
*/
template <class T>
bool Stack<T>::pop() {
	try {
		 this->deleteNode(this->getSize() - 1);
		return true;
	}
	catch(...){
		cout << "Could not pop from stack ..." << endl;
		return false;

	}
	
}


/******************************************
* bool isEmpty()
* checks if the stack is empty or not
*/
template <class T>
bool Stack<T>::isEmpty() {
	return LinkedList<T>::isEmpty();
}


/******************************************
* int getsize()
* returns the number of items on the stack
*/
/*template <class T>
int Stack<T>::getSize() {
	return stacksize;
}
*/


/******************************************
* void clear()
* clears the stack
*/
template <class T>
void Stack<T>::clear() {
	this->clear();
}

#endif
