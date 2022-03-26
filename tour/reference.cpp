#include <iostream>
#include <string>
using namespace std; 

struct house {
    string f1;
    string f2;
    
};

int main () { 
    
    house H {"horse","fist"};
    house* ptr = &H; 

    cout << ptr->f1 << endl;
    return 0;
}