#include <iostream> 
#include <vector> 

using namespace std;

template<typename T>
class arr { 
    vector<T> a; 

    public: 
    arr (initializer_list<T> aa) {

        a = aa; 
    } 

    void print() { 
        for (auto v : a) { 
            cout << v << ' ';
        }

        cout << endl; 
    }
    
    T operator[] (int x) { 

        return a[x];
    }

    



};

int main () { 
    arr<int> h =  {1,2,3,4,5};
    h.print();
    cout << h[2]; 
     


}