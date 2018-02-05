
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
 virtual void newlist(T node);  
 
  
  
  //add an item to list
 void addAnywhere(<T> x, int n){
      //create new node and initialize
      Node<T>* temp1 = new Node<T>();
      temp1->data=data;
      temp1->pointer=null; 
        
      
      if(n==1){
        temp1->pointer = head;
        head = temp1;
        return;
      }
        
      Node<T>* temp2 = head;
       for(int i = 1; i<n; i++){
         temp2=temp2->pointer;
       }
         temp1->pointer=temp2->pointer;
         temp2->pointer=temp1;   
 } ;
  
       
         //delete node
         void deleteNode(int n){
         Node<T>* temp1 = head;
         if(n==1){
         head = temp1->pointer;
         free(temp1);
          return;
         }
           for(int i=0; i<n-2;i++){
             temp1=temp1->pointer;
             Node<T>* temp2 = temp1->pointer;
             temp1->pointer = temp2->pointer;
             free(temp2);
         
         };
  
  
  
 virtual void findNode();
  
  //get the total items in list
  template <class T>
  int LinkedList<T> :: countItems(){
    return count;
    
  }
      
    ;
  bool EmptyList();
  bool isEmpty();
  
  
  
