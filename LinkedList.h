#ifndef LinkedList.h
#define LinkedList.h



template <class T>
struct Node {
  T data;
  Node <T>* pointer;
  
}




class LinkedList{
private:
Node <T>* head;     //pointer to first node
int count;          // no of nodes in the list



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
  
  
