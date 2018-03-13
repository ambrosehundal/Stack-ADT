#pragma once
//Ambrose Hundal
//Lab 2 
//Stack ADT
//Implement a link based stack ADT.

#ifndef NODE_H
#define NODE_H


template <class T>
class Node {

public:
	T data;
	Node<T>* next;

public:
	//Constructors and destructors
	Node();
	Node(T value);
	~Node();

	//getter and setter methods
	T getData() const;
	void setData(T data);
	Node<T>* getPtr() const;
	void setPtr(Node<T>* nextptr);

};

	/****************************************/
	/*Implementation*/
	/*Default constructor */

	template <class T>
	Node<T>::Node() {
	
		next = nullptr;
	}

	/****************************************
	***Constructor**********/
	template <class T>
	Node<T>::Node(T value) {
		data = value;
		next = nullptr;

	}

	/******************************************
	/*******Destructor*/
	template <class T>
	Node<T>::~Node() {
		next = nullptr;    
	}


	/******************************************
	* getData();
	* returns the data value stored in the Node
	*/

	template <class T>
	T Node<T>::getData() const {

		return Node->data;
	}



	/******************************************
	* void setData();
	* returns the data value stored in the Node
	*/
	template <class T>
	void Node<T>::setData(T nodevalue) {            //review your accessor and mutator methods

		Node->data = nodevalue;
	}


	/******************************************
	* Node<T>* getPtr();
	* returns the pointer (address value) stored in the Node
	*/
	template <class T>
	Node<T>* Node<T>::getPtr() const {

		return next;
	}

	/******************************************
	* void setPtr();
	* sets the pointer (address value) stored in the Node
	*/

	template <class T>
	void Node<T>::setPtr(Node<T>* nextptr) {

		Node->next = nextptr;

	}

#endif
