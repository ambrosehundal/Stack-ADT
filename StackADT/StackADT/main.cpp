

// StackADT.cpp : Defines the entry point for the console application.
//




#include "stdafx.h"
#include <string>
#include <iostream>
#include "LinkedList.h";
#include "Stack.h"
#include "Node.h"

using namespace std;


void intStackPush(Stack<int>* intPtr);
void intStackPop(Stack<int>* intPtr);
void intStackClear(Stack<int>* intPtr);
void doubleStackPush(Stack<double>* dPtr);
void doubleStackPop(Stack<double>* dPtr);
void doubleStackClear(Stack<double>* dPtr);
void stringStackPush(Stack<string>* sPtr);
void stringStackPop(Stack<string>* sPtr);
void stringStackClear(Stack<string>* sPtr);


int main()
{
	Stack<int> stackint;
	Stack<double> stackdouble;
	Stack<string> stringstack;




	cout << "Welcome to the link based Stack ADT demo";
	int choice;
	bool loopChoice = true;
	while (loopChoice) {
		cout << "Please select an option from the choices listed below:" << endl
			<< "1. Push an integer onto the stack" << endl
			<< "2. Pop an integer off the stack" << endl
			<< "3. Clear the integer based Stack" << endl
			<< "4. Push a double onto the stack" << endl
			<< "5. Pop a double off the stack" << endl
			<< "6. Clear the double based Stack" << endl
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
			if (choice == 1) intStackPush(&stackint);
			else if (choice == 2) intStackPop(&stackint);
			else if (choice == 3) intStackClear(&stackint);
			else if (choice == 4) doubleStackPush(&stackdouble);
			else if (choice == 5) doubleStackPop(&stackdouble);
			else if (choice == 6) doubleStackClear(&stackdouble);
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
	cout << "Enter an integer to push to the stack";
	cin >> x;
	intPtr->push(x);
	cout << "Stack Items:" << endl << intPtr << endl;

}


/***********************************
*void intStackPop();
*removes an integer from the stack
*/
void intStackPop(Stack<int>* intPtr) {
	if (intPtr->isEmpty()) {
		cout << "Stack is empty!";
	}
	else {
		intPtr->pop();
		cout << "Stack items:" << endl << intPtr << endl;
	}
}

/***********************************
*void intStackClear();
*clears the int stack
*/
void intStackClear(Stack<int>* intPtr) {
	intPtr->clear();
	cout << "Integer Stack Items:" << endl << intPtr << endl;
}


/***********************************
*void doubleStackPush();
*
*/

/***********************************
*void doubleStackPop();
*
*/

/***********************************
*void doubleStackClear();
*
*/

/***********************************
*void stringStackPush();
*
*/

/***********************************
*void stringStackPop();
*
*/

/***********************************
*void stringStackClear();
*
*/