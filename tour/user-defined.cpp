#include <iostream>
#include <string> //new type from the std library
using namespace std;

//structures 
struct Vector {

    int sz;
    double* elem;

}; //needs semicolon who wouldve guessed

void vector_init (Vector& v, int s) {

    v.elem = new double[s];
    v.sz = s;

}

//trying to create a struct 
struct darray {
    //dynamic array of integers 
    //should string together values with a pointer 
    //strings together values in variables 

    //last position

    int size = 3;
    int *ptrs[3];
    int current; 


};

void darray_init(darray& d, int v) { 
    d.current = 1; 
    d.ptrs[0] = &v; 
    d.current = 1;

}
void darray_add(darray& d, int v) { 

    if (d.size != d.current) {
        d.ptrs[d.current] = &v; 
        

    }
    d.current++;
}

void darray_print(darray& d) { 


    cout << "{ ";
    int c = 0;
    while (c < d.current) {
        cout << *d.ptrs[c] << ' '; 
        c++;
    }
    cout << "} " << endl;
}



void string_printer(std::string a) {
    //takes in string value and prints it 
    std::cout << a << std::endl;
}

void ptr_test() {
    //can does the pointer of x change when x changes 
    int x =6; 
    int* ptr = &x; 

    cout << ptr << endl;

    x = 7;

    cout << ptr << endl;

    //the space in memory does not change 



}



int main() {


    //std::string a = "I am a horse";
    //string_printer(a);
    //ptr_test();


    // cout << "who" << endl;
    // int x = 7; 
    // darray harrison; 

    // darray_init(harrison,x);
    // cout << *harrison.ptrs[0] << " and x : " << x  <<  endl; 
    
    // int x, y, z;
    // x = 5;
    // y = 6 ;
    // z = 47 ;
    // darray Harrison; 
    // darray_init(Harrison, x);
    
    // darray_print(Harrison);
    
    // darray_add(Harrison, y);
    
    // darray_print(Harrison);
    
    // darray_add(Harrison,z);

    // darray_print(Harrison);

    int p = 6; 
    int x = 7; 

    int *ptr_arr[2]; 

    ptr_arr[1] = &p;
    cout << ptr_arr[0] << " and " << ptr_arr[1] << endl; 

    ptr_arr[1] = &x;
    cout << *ptr_arr[0] << " and " << *ptr_arr[1] << endl;








    return 0; 
    
}