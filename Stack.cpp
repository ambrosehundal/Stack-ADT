#include stack.h



//constructor
template <class S>
class Stack:: public LinkedList <T>       //Stack inherits singly linkedlist
stack<S>:: stack(){
  top = nullptr;
  stacksize = 0;
}


//push
template <class S>
void stack<S>:: push(S s){
  if(isFull()){
    cout << "Stack is full";
    exit(EXIT_FAILURE);
  }
  [++top] = s;
  
  


//pop
template <class S>
  S stack<S>:: pop(){
    
    if(isEmpty()){
      cout << "Empty stack" ;
      exit(EXIT_FAILURE);
    }
    return [top]--;
    
//isEmpty
  template <class S>
    bool stack<S>:: isEmpty(int stacksize){
      return(stacksize == 0);
    }
    

//isFull
    template <class S>
      bool stack<S>:: isFull(){
        return(top == -1);
      }
    




