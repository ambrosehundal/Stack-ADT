//Ambrose Hundal

#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include "Node.h"


template <class T>
class LinkedList : public Node

private:
	Node<T> headptr;
	int itemcount;

public:
	LinkedList();
	LinkedList(const Node<T>* head);
	~LinkedList();

//do you need accessor and mutator methods?

/*functions*/
//void newlist()

void insertNode();
void deleteNode();
bool findNode();
int getsize();
void clear();


/*******Implementation************/


/******************************************
* LinkedList()
* 
*/
template <class T>
LinkedList<T>::LinkedList(){

	headptr = nullptr;
	itemcount = 0;
}

/******************************************
* LinkedList()
* parametrized constructor
*/
template <class T>
LinkedList<T>::LinkedList(const Node<T>* head){

	headptr = nullptr;
	itemcount = 0;
}

/******************************************
* void insertNode();
* adds a node entry to the linkedlist at the specified index
*/
template <class T>
void LinkedList<T>::insertNode(T nodeval){
	                                        //double check the parameters based on the stack implementation
}



/******************************************
* void deleteNode();
* deletes a node entry 
*/
template <class T>
void LinkedList<T>::deleteNode(T nodeval){
	                                       
}



/******************************************
* bool findNode();
* returns true if the node specified in the parameter is found
*/
template <class T>
bool LinkedList<T>::findNode(T nodeval){
	                                       
}


/******************************************
* int getsize()
* returns the number of items in the list
*/
template <class T>
int LinkedList<T>::getSize(){
	return itemcount;
}



/******************************************
* void clear();
* clears the list
*/
template <class T>
void LinkedList<T>::clear(){
	headptr = null;
	itemcount = 0;
}

#endif
