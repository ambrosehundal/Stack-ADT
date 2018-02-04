#ifndef LinkedList.h
#define LinkedList.h



template <class ListType>
class LinkedList{
private:
//pointer to first node
//head
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
  
  
