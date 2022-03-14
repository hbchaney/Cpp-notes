#include <iostream>
#include <vector> 
#include <string> 
using namespace std;


// data types 

void datatypes () {

    int a {10}; 

    //int c[8];
    int c[] {1,2,3,4,5,6,7}; 

     

    std::string b = "hello there"; 

    std::cout << b << std::endl;

    

}


void looper () {

    // for loopin with 


    // int c[] {1,2,3,4,5,6,7};
    // int b[10];

    // cout << b[0] << endl;

    // int d_total = sizeof(b);
    // int elem = sizeof(b[0]);

    // int total = d_total/elem;

    //cout << "array size : " << d_total << " elem size : " << elem << endl;

    //cout << total << endl; 

    /*
    for (int i=0; i<total;i++) {
        cout << b[i] << endl; 
    }
    */

    // for (auto& a : c) {
    //     a++;

    // }

    // for (auto a : c) { 
    //     cout << a << endl;
    // }


    
    int a[] {1,2,3,4};
    int* p = &a[0];


    for (int& stuff : a) { 
        cout << *p << endl; 
        p++;
    }







    




}

void ref_changer(int& a) {
    a++;

}



int main() {
    //datatypes();
    //looper();
    int a = 1;
    ref_changer(a);
    cout << a << endl;

    return 0;
}

