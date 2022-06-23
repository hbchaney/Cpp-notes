#include <iostream>  
using namespace std; 

//node data struucture 
struct node { 
    int id; 
    int type; 
    node* friends; 
    
    node (); 
    ~node (); 

};

//linked stack to hold nodes that have been orginized 
class linked_stack { 

};

//node double container one with queue 
class node_map { 
    linked_stack mapped; 
    linked_stack map_queue; 

};

