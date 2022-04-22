#include <iostream> 
using namespace std; 

class shape { 
public:  
    virtual double area() = 0; 
    virtual double perimeter() = 0;
    virtual ~shape() {} 
};

class polygon : public shape { 
    int sides; 
public: 
    polygon (int num) : sides{num} {}; 
    virtual ~polygon () {} 
    virtual int number_of_sides () = 0; 

    int s_ret () { 
        return sides; 
    }

};

class square: public polygon { 
    double side; 
    public: 
    square (double s=10) : polygon{4} ,side{s} {} 
    ~square () {} 

    double area() override { 
        return side * side; 
    } 
    double perimeter() override { 
        return side * 4; 
    }

    int number_of_sides () override { 
        return 4; 
    }

};

int main () { 

    square Harrison;
    cout << Harrison.area() << endl; 
    cout << Harrison.s_ret();

    return 0; 

}