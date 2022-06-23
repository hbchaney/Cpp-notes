#include <iostream> 
using namespace std; 

void transform(int& x) { 
    x = x + 7; 
}



int main () { 

    crazy = &transform; 
    int a = 21; 
    crazy(a); 
    cout << a << endl; 

}