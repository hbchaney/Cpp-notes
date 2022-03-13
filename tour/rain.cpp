#include <dos.h> 
#include <iostream> 
using namespace std; 


void matrix (char* m , int dim1, int dim2) {

}

void print (char* m , int dim1, int dim2) { 


for (int r = 0; r<dim1; r++) { 
    for (int c =0; c<dim2;c++) { 
        cout << m[r*dim2+c]; 
    }
    cout << endl; 
}

}


int main () {

    //initialize the matrix 
    int y = 10;
    int x = 25;
    char m[y][x]; 

    for (int r = 0; r <y; r++) {
        for (int c = 0; c<x; c++) {
        m[r][c] = ' ' ; 



        }
    }

    print(&m[0][0],y,x);




}