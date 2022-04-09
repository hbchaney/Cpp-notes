#include <iostream> 
using namespace std; 


template <typename T> 
class dyn_arr { 

    private: 
    int sz; 
    int cap; 
    T* ptr; 

    void resize () {
        if (sz == cap) { 
            cap = cap*2;
            T* ptr2 = new T[cap];
            for (int i=0; i < sz; i++) { 
                ptr2[i] = ptr[i];

            }
            delete ptr;
            ptr = ptr2; 

        }
        else if (sz < cap/4 && cap>10) { 
            T* ptr2 = new T[cap/2]; 
            cap = cap/2;
            for (int i=0; i < sz; i++) { 
                ptr2[i] = ptr[i];

            }
            delete ptr;
            ptr = ptr2;
        }

    }; 


    public:

    dyn_arr<T> (int c=10,int s=5) : cap{c},sz{s} {

        ptr = new T[cap];

        for (int i=0; i < sz; i++) { 
            ptr[i] = 0; 
        }

    }

    ~dyn_arr<T> () { 
        delete ptr; 
    }


    void push (T value) {

        resize(); 
        ptr[sz] = value; 
        sz += 1; 



    }
    
    T pop () {
        if (sz == 0) { 
            cout << "no more values to pop" << endl; 
            throw; 
        }
        sz -= 1; 
        resize(); 
        return ptr[sz]; 
         



    }

    void print () { 

        cout << '[' << ' '; 
        for (int i = 0; i < sz; i++) { 
            cout << ptr[i] << ' '; 

        }
        cout << ']' << endl; 

    }

    void p_size() { 
        cout << "the arr has " << cap << " total positions" << endl; 
    }
     


};





int main () { 

    dyn_arr<int> Harrison; 
    // Harrison.print();
    // Harrison.p_size(); 


    for (int i =0; i < 60; i++) { 
        Harrison.push(i);
        // Harrison.print();
        Harrison.p_size(); 

    }

    Harrison.print();

    for (int i =0; i < 57; i++) { 
        cout << Harrison.pop() << endl; 
        Harrison.p_size();

    }

    Harrison.print();







    
    
    return 0; 

}