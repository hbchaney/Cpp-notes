#include <iostream>
#include <complex>
using namespace std; 

template<class X>
void hello(X yo) { 
    cout << yo << endl; 

}

template<class X> 
void hello(complex<X> yo) { 
    cout << yo.real() << " + " << yo.imag() << endl; 
}

int main () { 
    complex<double> x = 5; 
    hello(5);
    hello(x);
    cout << x.imag() << endl; 
    return 0; 

}