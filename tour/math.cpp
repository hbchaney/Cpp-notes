#include <iostream> 
#include <math.h> 
#include <exception> 

using namespace std; 

int hello (int x) { 
    return x>6 ? 4: 6;
}

int main () { 
    int x = 6;
    int y = pow(x,4);
    cout << y << endl; 

    x = hello(x);
    cout << x << endl;
}