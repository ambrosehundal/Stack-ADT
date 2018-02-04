#ifndef LinkedList.h
#define LinkedList.h



template <class T>
struct Node {
  T data;
  Node <T>* pointer;
  
}




class LinkedList{
private:
//pointer to first node
Node <T>* head;
//count



public:
  //constructor & destructor
  LinkedList();
  ~LinkedList();
  
  
  //functions
  void newlist(T node);        
  void addNode(T node);
  void deleteNode();
  void findNode();
  int countItems();
  bool EmptyList();
  
  
