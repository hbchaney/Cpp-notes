#include "Node.hpp"

Node::Node (int ident=0,int t=0,int num=0, int *lnk_ptr=nullptr) : id{ident}, type{t}, len{num}, links{lnk_ptr} {} 

Node::~Node () { 
    delete links; 
}

void Node::change_links (int* l,int number) { 
    links = l; 
    len = number; 
} 

const int* Node::link_ptr () { 
    return links; 
}

const int Node::link_num () { 
    return len; 
}

void Node::print_info () { 
    cout << "atom id : " << id << endl; 
    cout << "atom type " << type << endl; 
    cout << "bonds : "; 
    cout << '<'; 
    for (int i = 0; i < len; i++) { 
        cout << ' ' << links[i]; 
    }
    cout << ' ' << endl; 
}