#include <iostream> 
#include <thread> 
#include <chrono> 
#include <stdlib.h>

using namespace std; 

void fprinter (char* arr,int dim) { 
    
    this_thread::sleep_for(chrono::milliseconds(100));
    system("CLS"); 

    for (int i=0;i<dim;i++) { 
        cout << arr[i] << ' ';
    }
    cout << endl; 

    for (int i=0;i<dim;i++) { 
    cout << arr[i] << ' ';
    }
    cout << endl;



}

void fadjuster (char* arr, int dim,int count) { 

    int x = count % dim; 
    int y = (count + 2) % dim;

    arr[x] = ' ';
    arr[y] = '.';


}

int load_bar (int t_frames) {

    int dim {10}; 
    char frame[dim]; 
    char* f = frame; 

    for (int i=0;i<dim;i++) { 
        frame[i] = ' ';
    }

    for (int i=0; i<t_frames; i++){
    fprinter(f,dim);
    fadjuster(f,dim,i);
    }
}

int main () { 

    load_bar(120);

    return 0; 

}