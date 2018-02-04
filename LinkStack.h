#ifndef Stack
#define Stack
#include "Node.h"


template < class ItemType > 
class LinkStack{

private:
  Node <Type> *topPtr;	// Pointer to first node in the chain;


public:
// Constructors and destructor:
  LinkStack ();	// Default constructor
  virtual ~ LinkStack ();	// Destructor

//Stack operations:
  bool isEmpty () const;

  bool push ();

  bool pop ();

};  

