#include <iostream>
#include <array> 

using namespace std; 

void printer (int* arr,int dim) { 
    for (int i=0; i < dim; i++) { 
        cout << arr[i] << endl; 

    }
}

int main () { 

    array<int,10> Harrison {1,2,3,4,5,6,7,8,9,10}; 
    cout << Harrison.size() << endl; 


    int x[] = {1,2,3,4,5}; 
    int dim = 5;
    int* y; 
    y = x; 

    printer(y,5);




    return 0; 

}