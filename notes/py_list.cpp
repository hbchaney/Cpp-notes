#include <iostream>  
using namespace std; 

 
struct py_elem {
    py_elem* l_ptr; 
    py_elem* r_ptr; 
    int x; 
};


class py_list {

    py_elem* left; 
    py_elem* right; 
    int sz; 

    public: 

    py_list () { 
        left = new py_elem; 
        right = new py_elem; 
        left->r_ptr = right; 
        right->l_ptr = left;  
        sz = 0;  
    } 

    ~py_list () { 

        for (int i=0 ; i < sz; i++) { 
                py_elem* temp = left->r_ptr;
                left->r_ptr = temp->r_ptr; 
                delete temp; 
        }
        delete left; 
        delete right; 
        cout << "poggers" << endl; 
    }

    void push_left (int); 
    void push_right (int); 
    int pop_left ();
    int pop_right (); 
    void print (); 
    bool is_empty (); 


};

void py_list::push_right(int value) { 
    py_elem* entry = new py_elem{right,right->l_ptr,value};
    right->l_ptr = entry; 
    entry->l_ptr->r_ptr = entry; 
    sz++; 
}

void py_list::push_left(int value) { 
    py_elem* entry = new py_elem{left,left->r_ptr,value}; 
    left->r_ptr = entry; 
    entry->r_ptr->l_ptr = entry;
    sz++; 
}

int py_list::pop_left() { 
    if (sz == 0) { 
        throw; 
    } 
    py_elem* temp = left->r_ptr;
    int value = temp->x; 
    left->r_ptr = temp->r_ptr; 
    left->->l_ptr = left; 
    delete temp; 
    sz--; 
    return value; 
}

int py_list::pop_right() { 
    if (sz == 0) { 
        throw; 
    } 
    py_elem* temp = right->l_ptr;
    int value = temp->x; 
    right->l_ptr = temp->l_ptr; 
    delete temp; 
    sz--; 
    return value;
}

int main () { 

    py_list Harrison ; 

    Harrison.push_left(6);
    Harrison.push_left(8); 
    Harrison.push_left(10); 
    cout << Harrison.pop_right() << endl; 
    cout << Harrison.pop_right() << endl;
    Harrison.push_left(5);
    cout << Harrison.pop_right() << endl; 
    cout << Harrison.pop_right() << endl;

    // for (int i = 0 ; i < 40; i++) { 
    //     Harrison.push_left(i); 
    // }


    // for (int i = 0; i < 30; i++) { 
    //     cout << Harrison.pop_left() << endl; 
    // }
    return 0; 
}

