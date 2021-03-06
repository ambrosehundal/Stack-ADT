
#include "stdafx.h"
#include <string>
#include <iostream>
#include "LinkedList.h"
#include "Stack.h"
#include "Node.h"
#include "Currency.h"
#include "Dollar.h"

using namespace std;

//objects
Stack<int> stackint;
Stack<Currency> stackcurrency;
Stack<string> stringstack;

//pointers to the objects 
Stack<int>* stackObjint = &stackint;
Stack<Currency>* stackObjcurr = &stackcurrency;
Stack<string>* stackObjstr = &stringstack;


void intStackPush(Stack<int>* intPtr);
void intStackPop(Stack<int>* intPtr);
void intStackClear(Stack<int>* intPtr);
void CurrencyStackPush(Stack<Currency>* dPtr);
void CurrencyStackPop(Stack<Currency>* dPtr);
void CurrencyStackClear(Stack<Currency>* dPtr);
void stringStackPush(Stack<string>* sPtr);
void stringStackPop(Stack<string>* sPtr);
void stringStackClear(Stack<string>* sPtr);


int main()
{
	




	cout << "Welcome to the link based Stack ADT demo" << endl;
	int choice;
	bool loopChoice = true;
	while (loopChoice) {
		cout << "Please select an option from the choices listed below:" << endl
			<< "1. Push an integer onto the stack" << endl
			<< "2. Pop an integer off the stack" << endl
			<< "3. Clear the integer based Stack" << endl
			<< "4. Push a Dollar currency onto the stack" << endl
			<< "5. Pop the currency off the stack" << endl
			<< "6. Clear the Currency based Stack" << endl
			<< "7. Push a string onto the stack" << endl
			<< "8. Pop a string off the stack" << endl
			<< "9. Clear the string based Stack" << endl
			<< "10. Exit application" << endl << endl
			<< "Selection Number: ";

		cin >> choice;
		if (cin.fail()) {
			cin.clear();
			choice = 0;
		}
		if (choice < 1 || choice > 10) {
			cout << "Your selection is not valid. Please try again." << endl;
		}
		else {
			if (choice == 1) intStackPush(stackObjint);
			else if (choice == 2) intStackPop(&stackint);
			else if (choice == 3) intStackClear(&stackint);
			else if (choice == 4) CurrencyStackPush(&stackcurrency);
			else if (choice == 5) CurrencyStackPop(&stackcurrency);
			else if (choice == 6) CurrencyStackClear(&stackcurrency);
			else if (choice == 7) stringStackPush(&stringstack);
			else if (choice == 8) stringStackPop(&stringstack);
			else if (choice == 9) stringStackClear(&stringstack);
			else loopChoice = false;
		}

	}


	return 0;
}

/***********************************
*void intStackPush();
*pushes an integer onto the stack
*/

void intStackPush(Stack<int>* intPtr) {
	int x;
	cout << "Enter an integer to push to the stack" << endl;
	cin >> x;
	intPtr->push(x);
	cout << "Integer Stack Items:" << endl << intPtr << endl;

}


/***********************************
*void intStackPop();
*removes an integer from the stack
*/
void intStackPop(Stack<int>* intPtr) {
	if (intPtr->isEmpty()) {
		cout << "Stack is empty! " << endl;
	}
	else {
		intPtr->pop();
		cout << "Integer Stack items:" << endl << intPtr << endl;
	}
}

/***********************************
*void intStackClear();
*clears the int stack
*/
void intStackClear(Stack<int>* intPtr) {
	if (intPtr->isEmpty()) {
		cout << "Empty Stack! Nothing to clear." << endl;
	}
	intPtr->clear();
	cout << "Integer Stack Items:" << endl << intPtr << endl;
}


/***********************************
*void CurrencyStackPush();
* pushes a Currency dollar object to the stack
*/
void CurrencyStackPush(Stack<Currency>* dPtr) {
	int dollars = 0;
	int cents = 0;

cout << "Enter the amount of dollars and cents: " << endl;
cin >> dollars >> cents;

dPtr->push(Dollar(dollars, cents));
cout << " Currency Stack Items:" << endl << dPtr << endl;

}


/***********************************
*void CurrencyStackPop();
* pops a Dollar object from the stack
*/
void CurrencyStackPop(Stack<Currency>* dPtr) {
	if (dPtr->isEmpty()) {
		cout << "Stack is empty!" << endl;
	}
	else {
		dPtr->pop();
		cout << " Currency Stack items:" << endl << dPtr << endl;
	}
}



/*********************************** 
*void CurrencyStackClear();
* clears the stack
*/
void CurrencyStackClear(Stack<Currency>* dPtr) {
	if (dPtr->isEmpty()) {
		cout << "Empty Stack! Nothing to clear." << endl << endl;
	}
	dPtr->clear();
	cout << "Currency Stack Items:" << endl << dPtr << endl;
}


/***********************************
*void stringStackPush();
*pushes a string on to the stack
*/
void stringStackPush(Stack<string>* sPtr) {
string x;
cout << "Enter a string to push to the stack" << endl;
cin >> x;
sPtr->push(x);
cout << "Stack Items:" << endl << sPtr << endl;
}




/***********************************
*void stringStackPop();
*pops a string off the stack
*/
void stringStackPop(Stack<string>* sPtr) {
	if (sPtr->isEmpty()) {
		cout << "Stack is empty!" << endl;
	}
	else {
		sPtr->pop();
		cout << " String Stack items:" << endl << sPtr << endl;
	}
}



/***********************************
*void stringStackClear();
* clears the stack
*/
void stringStackClear(Stack<string>* sPtr) {
	if (sPtr->isEmpty()) {
		cout << "Stack is Empty! Nothing to clear" << endl;
	}
	sPtr->clear();
	cout << "Integer Stack Items:" << endl << sPtr << endl;
}



/*****************************
* Overload Operator << to print the contents of the pointer 
  instead of memory address. In this case, we try to print 
  the values of items in stack 
*/


/*Operator to print Currency Objects*/
ostream& operator<< (ostream&out, Currency d) {
	out << "Dollar, " << d.whole << ", " << d.fraction << ", cents" << endl;
	return out;
}

template<class T>
ostream& operator<<(ostream&outputline, const Currency stackcurrency) {
int position = 1;
Node<T>* curr = stackcurrency->head;
while (curr != nullptr) {
outputline << position << ". " << curr->getData() << endl;
curr = curr->getPtr();
position++;
}
return outputline;
}









template<class T>
ostream& operator<<(ostream&output, const LinkedList<T>* stackptr) {
	int position = 1;
	Node<T>* curr = stackptr->head;
	while (curr != nullptr) {
        		output << position << ". " << curr->getData()  << endl;
		curr = curr->getPtr(); 
		position++;
	}
	return output;
}

template<class T>
ostream& operator<<(ostream&output, const Stack<T>* stackptr) {
	int position = 1;
	Node<T>* curr = stackptr->head;
	while (curr != nullptr) {
		output << position << ". " << curr->getData() << endl;
		curr = curr->getPtr();
		position++;
	}
	return output;
}



