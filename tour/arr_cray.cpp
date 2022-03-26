#include <iostream> 

using namespace std; 


void matrix(int* arr,int dim1, int dim2) { 

    

}

int main() { 

    int arr2d[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    int arr1d[] = {1,2,3,4};
    int* arr_ptr = arr1d;
    // cout << *arr_ptr << endl; 

    // int* arr_ptr2 = &arr1d[0];

    // cout << *arr_ptr2 << endl; 

    int* arr_ptr3 = &arr2d[0][0]; 
    for (int i=0;i<9;i++) { 
        cout << *arr_ptr3 << ' ';
        arr_ptr3++;
    }


}