
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
  
  //add an item to list
 template <class T>
 void LinkedList<T> :: addAnywhere(<T> data, int n){
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
    template <class T>
    void LinkedList<T> :: deleteNode(int n){
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
  
  
  template <class T>
  void LinkedList<T> :: findNode(){
    struct Node* current = head;
    int nodecount = 0;
    
    while(current!= NULL){
      if(nodecount == index){
        return(current->data)
      }
      nodecount++;
      current=current->pointer;
    }
  }
      
  
  //get the total items in list
  template <class T>
  int LinkedList<T> :: countItems(){
    return count;
    
  }
      
  //clear the list 
  template <class T>
  bool LinkedList<T> :: EmptyList(Node<T>* c){
    Node<T>* current = head;
    Node<T>* temp;
    while(temp!=null){
      temp = current;
      current = current->next;
      free(temp);
    }
      
  }
  //check if list is empty
  template <class T>
  bool LinkedList<T> :: isEmpty(Node<T>* head){
    return(head == null);
  }
  
  
  
