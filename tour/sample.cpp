#include <iostream> 
#include <random>
#include <string>
#include <vector>
using namespace std;

void m_changer (char* m,int dim1=3,int dim2=3) { 

    for (int i = 0; i<dim1;i++){
        for (int j=0 ; j<dim2;j++){
            m[i*dim2+j] = 'c';
        }
    }

}

void m_printer(char* m,int dim1=3,int dim2=3) { 

    for (int i = 0; i<dim1;i++){
        for (int j=0 ; j<dim2;j++){
            cout << m[i*dim2+j] << ' ' ;    
        }
    cout << endl; 
    }


}


void ptr (int* p) { 
    cout << p << '\n';
    cout << *p << '\n';
}

void ptr_array (int* p,int dim) { 
    for (int i = 0;i<dim;i++) { 
        cout << p[i] << ' '; 

    }
    cout << endl;
}

//how it should really be 
void ptr_array1 (int* p, int dim) { 
    for (int i = 0;i<dim;i++) { 
        cout << *p << ' ';
        p++;  

    }
    cout << endl; 
}


int main() {

    // char m[3][3] = {{'a','b','c'},{'e','f','g'},{'h','i','j'}};
    
    // m_printer(m[0]);

    // m_changer(m[0]);

    // m_printer(m[0]);

    // deez(float{8.5}); 
    // deez(int{8});
    // deez();

    
    int g = 7; 

    // int g_a[] = {1,2,3,4,5};

    // cout << "ptr function : " << endl;
    // ptr(&g);
    // cout << "ptr_array function : " << endl;
    // ptr_array(g_a,5);
    // cout << "ptr_array1 function : " << endl; 
    // ptr_array1(&g_a[0],5);

    
    for (char c; cin>> c;) { 
        cout << "hello \n"; 
        if (c == 'v') break;
    }
    





    return 0;


}


