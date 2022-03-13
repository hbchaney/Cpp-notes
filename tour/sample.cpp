#include <iostream> 
#include <random>
#include <string>
#include <vector>
using namespace std;

void deez(int x) { 
    cout << "deez " << x << " nutz" << endl; 
}

void deez(float x) {  
    cout << "deez " << x << " nutz" << endl; 
}

void deez() { 
    cout << "fuck" << endl; 
}


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

int main() {

    // char m[3][3] = {{'a','b','c'},{'e','f','g'},{'h','i','j'}};
    
    // m_printer(m[0]);

    // m_changer(m[0]);

    // m_printer(m[0]);

    deez(float{8.5}); 
    deez(int{8});
    deez();

    


    





    return 0;


}


