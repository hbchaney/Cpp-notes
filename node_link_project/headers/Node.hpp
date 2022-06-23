#ifndef NODE_H
#define NODE_H
#include <iostream> 
using namespace std; 

class Node { 
    int id; 
    int type; 
    int len;
    int* links;   

    public: 
    Node (int,int,int,int*); 
    ~Node (); 


    void change_links (int*,int); 
    const int* link_ptr (); 
    const int link_num(); 
    void print_info (); 
};

#endif