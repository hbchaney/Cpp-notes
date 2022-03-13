#include <iostream> 
#include <random>
using namespace std; 



//trying to make a concrete class of the container type
class iarray { 

    
    public:
        int sz;int* elem;
        iarray(int v) : elem{new int[v]},sz{v}
        {
            for (int i=0;i!=v;i++)
            {
                elem[i]=std::rand() % 100; //making everything in the class zero to start
            }

        }
        ~iarray() {
            delete[] elem;
        }

        // void random() {
        //     //makes the array random 
        //     for (i=0;i<sz;i++) {
        //         v.elem[i] =std::rand() % 100;
        //     }
        // }

        void print() { 
            cout << elem << endl;
        }

    private: 
     
    



};

iarray operator+ (const iarray& x,const iarray& y) {
    if (x.sz != y.sz) {
        std::cout << "whoops wrong size" << std::endl;
        return x;

    }
    else {
    iarray z = {x.sz};  
    
        for (int i = 0; i<x.sz; i++) {
            z.elem[i] = x.elem[i] + y.elem[i];
        }
    }
}

int main() {

    iarray x = {6};
    iarray y = {6};
    iarray z = x+y;
    z.print();

    



}