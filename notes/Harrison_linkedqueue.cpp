#include <iostream>
using namespace std; 

class link_stack { 

    //my linked stack pushs to the front and pops out the back 
    //this is because every element only knows the element in front of it
    //and the start is stored 

    //in other words the back cannot pop because it doesnt know whats behind it 


    struct node { 
        node* nptr; 
        int val; 
        //the nodes automatically point to space 
        node (int v,node *ptr=nullptr) : nptr{ptr}, val{v} {} 

    };
    //I chose to have start stored on the stack should still keep the class light
    node* start; 
    node* head; 
    int sz; 

    public:
    //initializing the list 
    link_stack (int v=0) : sz{1} {
        start = new node{v};
        head = start; 

    }
    
    //destructor basically just calls pop() 
    ~link_stack () {
        for (int i=0; i<sz; i++) { 
            node* st_ptr = start;
            start = start -> nptr; 
            delete st_ptr; 

        }
    }

    //pushes to the back 
    void push (int v) { 
        node* temp = new node{v};
        head -> nptr = temp; 
        head = temp; 
        sz++;
    }

    //pops out the front value 
    int pop_out () { 
        sz--;
         if (start -> nptr == nullptr) { 
            int value = start -> val; 
            delete start;
            return value; 
        }
        else if (start == nullptr) { 
            cout << "no more values" << endl; 
            throw; 

        }
        else{
            //temp start holder 
            node* st_ptr = start;
            start = start -> nptr; 
            int value =  st_ptr -> val;
            delete st_ptr; 
            return value; 
        }
    }
    //same as above but no return 
    void pop () { 
        sz--;
        if (start -> nptr == nullptr) { 
            delete start;
        }
        else if (start == nullptr) { 
            cout << "no more values" << endl; 
            throw; 

        }
        else {
            node* st_ptr = start;
            start = start -> nptr; 
            delete st_ptr; 
        }
    }

    int size() { 
        return sz; 
    }



};

int main () { 
    
    link_stack Harrison; 
    for (int i =0; i < 20; i++) { 
        Harrison.push(i*2); 
    }
    for (int i =0; i < 20; i++) { 
        cout << Harrison.pop_out() << endl; 
    }
    return 0; 

}