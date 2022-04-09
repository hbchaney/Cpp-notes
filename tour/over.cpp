#include <iostream> 
using namespace std; 

void func(int); 
void func(int,int); 

void func(int x) { 
    cout << 2*x << endl; 
}

void func(int x,int y) { 
    cout << x+y << endl; 

}

int main () { 
    int x = 7; 
    int y = 9; 

    func(x); 
    func(x,y);
    
    return 0; 
}