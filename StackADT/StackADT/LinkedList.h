#pragma once
//Ambrose Hundal

#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include "Node.h"


template <class T>
class LinkedList : public Node<T> {

protected:
	Node<T>* head;
	int itemcount;

public:
	LinkedList();
	LinkedList(const Node<T>* headptr);
	//~LinkedList();

	void insertNode(T data, int position);
	void pushNode(T data);
	void deleteNode(int index);
	bool findNode(T value);
	int getSize();
	void clear();
	bool isEmpty();

   };




	/*******Implementation************/


	/******************************************
	* LinkedList()
	* default constructor
	*/
	template <class T>
	LinkedList<T>::LinkedList() {

		head = nullptr;
		itemcount = 0;
	}

	/******************************************
	* LinkedList()
	* parametrized constructor
	*/
	template <class T>
	LinkedList<T>::LinkedList(const Node<T>* headptr) {

		head = headptr;
		itemcount = 0;
	}

	/******************************************
	* void insertNode();
	* adds a node entry to the linkedlist at the specified index
	*/
	template <class T>
	void LinkedList<T>::insertNode(T data, int position) {
		int i;
		Node<T>* temp1 = new Node<T>(data);
		temp1->data = data;
		temp1->next = nullptr;

		if (position == 1) {
			temp1->next = head;
			head = temp1;
			return;
		}
		
		Node<T>*temp2 = new Node<T>();
		for (i = 0; i < position - 2; i++) {
 			temp2 = temp2->next;
		}

		temp1->next = temp2->next;
		temp2->next = temp1;
		itemcount++;
		
	}


	/******************************************
	* void pushNode();
	* adds a node entry to the linkedlist at the specified index
	*/
	template <class T>
	void LinkedList<T>::pushNode(T entry) {
		Node<T>* newNode = new Node<T>(entry);
		if (isEmpty) {
			head = newNode;
			}
		else
		newNode->next = head;
		head = newNode;
	}



	/******************************************
	* void deleteNode();
	* deletes a node entry
	*/
	template <class T>
	void LinkedList<T>::deleteNode(int index) {
		Node<T>* temp1 = head;

		if (index == 1) {
			head = temp1->getPtr();
			delete temp1;
			return;
		}

		for (int i = 0; i < index - 2; i++) {
			temp1 = temp1->next;
		}

		Node<T>*temp2 = temp1->next;
		temp1->next = temp2->next;
		delete temp2;
		itemcount--;
	}
		
		


	/******************************************
	* bool findNode();
	* returns true if the node specified in the parameter is found
	*/
	template <class T>
	bool LinkedList<T>::findNode(T value) {
		Node<T>* curr;

		while (curr != nullptr) {
			if (curr->data = value) return true;
			else curr = curr->nextptr;
		}

		return false;
	}


	/******************************************
	* int getsize()
	* returns the number of items in the list
	*/
	template <class T>
	int LinkedList<T>::getSize() {
		return itemcount;
	}



	/******************************************
	* void clear();
	* clears the list
	*/
	template <class T>
	void LinkedList<T>::clear() {
		headptr = null;
		itemcount = 0;
	}


	/******************************************
	* bool isEmpty;
	* checks if the list is empty
	*/
	template <class T>
	bool LinkedList<T>::isEmpty() {
		if (itemcount == 0) return true;
		return false;
	}


#endif