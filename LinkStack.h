#ifndef Stack
#define Stack
#include "Node.h"


template < class ItemType > 
class Stack{

private:
  Node<ItemType>* top;	// Pointer to first node in the chain;
  int stacksize;


public:
// Constructors and destructor:
  Stack ();	// Default constructor
  ~Stack ();	// Destructor

//Stack operations:
  bool isEmpty () const;

  bool push ();

  bool pop ();

};  

