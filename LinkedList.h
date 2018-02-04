#ifndef LinkedList.h
#define LinkedList.h



template <class ListType>
class LinkedList{

//data attributes
//node

public:
  //constructor & destructor
  LinkedList();
  ~LinkedList();
  
  
  //functions
  Node<ListType>* newlist();        
  <ListType> addNode();
  <ListType> deleteNode();
  <ListType> findNode();
  <ListType> countItems();
  <ListType> EmptyList();
  
  
