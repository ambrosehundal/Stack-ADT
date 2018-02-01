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
    
    
    

