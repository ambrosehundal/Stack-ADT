#ifndef NODE.H
#define NODE.H

template <class Type>    //include everytime to declare its a template class
class Node
{

private:
    Type nodeValue;
    Node<Type>* nodePointer;

public:
    //Constructors
    Node();
   
    Node(Type value);
    Node(Type value, Node<Type>* nextPointer);
    
    // getter and setter methods
    Type getNodeValue();
    Node<Type> * getNodePointer();
    void setNodeValue(Type data);
    void setNodePointer(Node<Type>* nextPointer);
    
    };


//Implement
//Constructors
template <class Type>
Node<Type> :: Node(){
    nodePointer = nullptr;
    
    }

template <class Type>
Node<Type> :: Node(Type value){
    this->nodeValue = value;
    this->nodePointer = nullptr;
    }
    
template <class Type>
Node<Type> :: Node(Type value, Node<Type>* nextPointer){
    this->nodeValue = value;
    this->nodePointer = nextPointer;
}

//Getters and Setters
template <class Type>
Type Node<Type>:: getNodeValue(){
    return nodeValue;

}

template <class Type>
Node<Type>* Node<Type>:: getNodePointer(){
    return nodePointer;
}

template <class Type>
void Node<Type> :: setNodeValue(Type data){
    this->nodeValue = data;
}

template <class Type>
void Node<Type> :: setNodePointer(Node<Type>* pointer){
    this->nodePointer = pointer;
}



    
    
    

    
    
    

