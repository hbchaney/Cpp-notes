#include <iostream> 
#include <thread> 
#include <chrono> 
#include <stdlib.h>

using namespace std; 


// void lbar_printer () { 

// }

void lbar_adjuster (int dim, char bar, int counter) { 

}


int main () { 

    int dim = 14;
    char lbar[dim]; 
    char* bar = lbar; 

    for (int i=0;i<dim; i++) { 
        lbar[i] = ' '; 
    }

    cout << bar << endl; 
    
    
    
    return 0; 
}