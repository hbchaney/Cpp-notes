#include <iostream> 
using namespace std; 

class T { 
    int x; 
    public: 
    T (int y) : x{y} {} 
    void printer () { 
        cout << x; 
    }
};

class T_s { 
    T *x_ptr; 
    public: 
    T_s (int x1,int x2) { 
        x_ptr = new T[2]{x1,x2}; 
    }
    void printer_all () { 
        x_ptr[0].printer();
        cout << ' ';  
        x_ptr[1].printer();
        cout << endl; 

    }
};

int main () { 
    T_s Harrison {1,2}; 
    Harrison.printer_all(); 

}