#ifndef STACK_H
#define STACK_H

//include all necessary files

template <class T>
class Stack : protected LinkedList{

private:
	int stacksize;
	Node<T>* top;

public:
	Stack();
	~Stack();

	bool isEmpty();
	bool push(T entry);
	bool pop();
	int size();
	void clear();
	T top;

}

//implementation does not go inside class scope, change on other files as well


/******************************************
* Stack();
* constructor
*/
template <class T>
Stack<T>::Stack(){

	LinkedList();
}


/******************************************
* Stack();
* destructor
*/
template <class T>
Stack<T>::~Stack(){

}


/******************************************
* bool push()
* pushes an entry onto the stack
*/
template <class T>
bool Stack<T>::push(){

}


/******************************************
* bool pop()
* pops an entry off the stack
*/
template <class T>
bool Stack<T>::pop(){

}


/******************************************
* bool isEmpty()
* checks if the stack is empty or not
*/
template <class T>
bool Stack<T>::isEmpty(){

}


/******************************************
* int getsize()
* returns the number of items on the stack
*/
template <class T>
int Stack<T>::getSize(){
	return stacksize;
}

/******************************************
* void clear()
* clears the stack
*/
template <class T>
void Stack<T>::clear(){

}

#endif

