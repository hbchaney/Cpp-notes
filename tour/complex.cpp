#include <iostream> 
using namespace std; 


class complex { 
    //defines an imaginary number class 
    double r; 
    double i; 

    public: 
        
    complex (double re=0, double im=0) : r{re},i{im} {} 
    complex (int im=0,double re= 0) : r{re}, i{im} {}

    complex& operator+=(complex a);
    complex& operator+=(double a);

    friend ostream& operator<<(ostream& os,complex I) { 
        return os << I.r << " + " << I.i << 'i' ; 
    } // should be defined outside the class 


}; 

complex& complex::operator+=(complex a) { //in the namespace complex to access the private info
    r = r + a.r;
    i = i + a.i;
    return *this;  

}

complex& complex::operator+=(double a) { 
    r+= a; 
    return *this; 
}

complex operator+(complex a, complex b) { 
    //defining outside the scope of the function 
    //provided a way for double to convert to complex through defaults  
    return a+=b; 
}

// complex operator+(complex a, double b) { 

//     return a+=b; 
// }

// complex operator+(double b, complex a) { 
//     return a+=b; 
// }

int main () { 
    
    complex H {2,4}; 
    complex B {10,17};
    complex C {8.0};
    H += B; 
    H = 7 + H; 
    cout << H + B << endl; 
    cout << H << endl; 
    cout << C << endl; 

    int test = 7; 
    complex J {test}; 
    cout << J << endl; 


    
    
    return 0; 
}