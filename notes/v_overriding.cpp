#include <iostream> 
using namespace std; 


class Base { 
    public: 
    virtual void print() { 
        cout << "hello from base" << endl; 
    }
    virtual void print_stuff () =0; 
    virtual ~Base () {}

};

class Deriv : public Base { 
    int value =7; 
    public: 
    void print() override { 
        Base::print(); 
        cout << "hello from derived" << endl; 
    }
    void print_stuff () override { 
        cout << value << endl; 
    }
    int re() { 
        return value; 
    }

};

int func (Deriv d) { 
    return d.re(); 
}

main () { 
    Deriv Harrison; 
    Harrison.print();

    using fptr = int(Deriv); 

}