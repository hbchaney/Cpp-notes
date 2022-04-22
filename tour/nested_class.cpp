#include <iostream> 
using namespace std; 

struct shape {
    double area; 
    double perimeter; 


};

struct square : public shape { 
    double side; 
};

struct rectangle : public shape { 
    double side1; 
    double side2; 
};

int main () { 
    
}