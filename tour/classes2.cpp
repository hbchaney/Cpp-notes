#include <iostream> 
using namespace std; 


class Date { 
    int d,m,y;
public: 
    static int x;
    Date (int dd, int mm, int yy) { 
        d = dd; 
        m = mm; 
        y = yy; 
    }

    void print() const { //const indicates that we do not change date's state
        cout << m << '/' << d << '/' << y << endl; 
    }

    Date& add_day(int);

};

Date& Date::add_day(int day) { 
    d += day; // this to refer to the value d 
    return *this; //returns the date value to chain other stuff
}

int Date::x = 7;// must defined like a global varible
int main () {

    Date birth  = {25,9,1998}; // explicitly called 
    birth.print();
    birth.add_day(1).add_day(2); // non static function allows this 
    birth.print();
    cout << Date::x << endl;
    




    return 0; 

}