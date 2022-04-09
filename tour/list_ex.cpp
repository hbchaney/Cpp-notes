#include <iostream> 

using namespace std; 
#define NULL nullptr


class stack_link {
    class elem { 
            public: 
            elem (int v) : value{v} {} 
            ~elem () {} 
            int value = 0; 
            elem* next = nullptr; 

        };
    int sz=1; 
     
    elem head {0}; 
    elem* start=&head;
    

    public: 
    stack_link () {} 
    ~stack_link () {} 

    void push (int data) {

        elem new_elem {data}; //temp node 
        if (&new_elem == nullptr) { 
            cout << "oh no" << endl;
            throw;
        }
        head.next = &new_elem; 
        head = new_elem; 
        sz++;

    } 

    // int pop (int pos) {
        
    // } 


    // void change (int changer,int pos) {

    // }
    
    void print () {

        elem* head_ptr = start; 
        while(head_ptr) { 
            
            cout << head_ptr->value << endl; //(*ptr).value
            head_ptr = head_ptr->next; 

        }


    } 

};

int main () { 

    stack_link Harrison; 
    elem 8; 
    elem 9;
    elem 12;
    elem 12; 
    
    return 0; 
}