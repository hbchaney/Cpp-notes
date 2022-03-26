#include <iostream> 
#include <initializer_list>
using namespace std; 

template<typename T> 
class Handle { 
    T* v; //points to an object allocated using new  
    int sz; 

    public: 

    Handle<T>(int dim) : sz{dim} {

        v = new T[sz]; 
        for (int i=0; i<sz ; i++) {
            v[i] = i; 
        }
    }

    ~Handle() { 
        delete v; 
    }

    void print() { 
        for (int i=0; i<sz; i++) { 
            cout << v[i] << ' ';
        }
        cout << endl; 
    }

    friend ostream& operator<< (ostream& os,Handle H )  {
        for (int i=0;i<H.sz;i++) {
            os << H.v[i] << ' ';
            
        }
        return os;
    }

};



// template<typename T>
// class Matrix { 
//     Handle* p; 
//     int* two;
//     int sz; 

//     public: 
//     Matrix(int dim1,int dim2) { 


//         sz = dim2; 
//         two = new int[dim2]; 
//         for(int i = 0; i<dim2; i++) { 
//             two[i] = dim1;
//         }
        
//     }



// };


int main () { 

    // Handle<int> H {4} ; 
    // H.print();

    Handle<double> B {8};
    cout << B << endl;

    return 0;



    

}