#ifndef LINKER_H
#define LINKER_H

#include "Node.hpp" 

class Stack {
    Node* top; 
    Node* previous;   

    public: 
    Stack (); 
    ~Stack (); 

    void push (Node*);
    Node* pop (); 
    

};



#endif