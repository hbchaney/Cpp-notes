#include <iostream>

using namespace std; 

class shape  { 
    int area; 

    public: 
    virtual double area () = 0;  
    virtual double perimeter () = 0;  
    virtual ~shape (); 
};

class polygon : public shape{ 
    int sides; 
    public:  
    
    polygon (int s=4) : sides{s} {} 
    int num_sides () { 
        return sides; 

    }
    ~polygon () {} 

    double area () override { 
        return sides*2; 
    }

    double perimeter () override { 
        return sides*4; 
    }




};


int main () { 
    
    polygon Harrison; 
    cout << Harrison.area() << endl; 

    return 0; 
}