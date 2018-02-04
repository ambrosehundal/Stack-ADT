#ifndef LinkedList.h
#define LinkedList.h



template <class T>
struct Node {
  T data;
  Node <L>* pointer;
  
}




class LinkedList{
private:
//pointer to first node
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
  
  
