#include <iostream>
using namespace std; 

class shape {
    public: 
    virtual double find_area(); 
    virtual double find_perimeter(); 


    private: 


};

class square : shape { 
    public: 
    square (double x) : side{x} {}
    double find_area();
    private:
    double side; 
    double area;

};

double square::find_area() {
    area = side * side; 
    return area; 

}

int main () { 

    return 0; 

}