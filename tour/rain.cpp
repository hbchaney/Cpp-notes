#include <thread> 
#include <chrono> 
#include <iostream> 
#include <stdlib.h>
using namespace std; 


inline void matrixlower (char* m , int dim1, int dim2) {

    //updates the lower part of the matrix 
    //starts from the bottom and stops at the second row 

    for (int r = dim1; r > 0; r--) {
        for (int c = 0; c<dim2; c++) { 
            m[r*dim2+c] = m[(r-1)*dim2 +c];
        }
    }


}

inline void matrixupper (char* m , int dim1, int dim2) { 
    char rain = '.';
    char snow = 'x';
    
    for (int i; i<dim2;i++) { 

        int random = rand() % 100;
        if (random > 85 && random <= 95) { 
            m[i] = rain;
        }
        else if (random > 95) {
            m[i] = snow;
        }
        else {
            m[i] = ' ';
        }

    }
}

inline void print (char* m , int dim1, int dim2) { 


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
    system("CLS");
    print(m[0],y,x);


    this_thread::sleep_for(chrono::milliseconds(50));
    matrixupper(m[0],y,x);
    system("CLS");
    print(m[0],y,x);

    for (int i = 0; i < 60; i++) { 

    this_thread::sleep_for(chrono::milliseconds(50));
    matrixupper(m[0],y,x);
    system("CLS");
    print(m[0],y,x);

    this_thread::sleep_for(chrono::milliseconds(50));
    matrixlower(m[0],y,x);
    system("CLS");
    print(m[0],y,x);

    }



    






}