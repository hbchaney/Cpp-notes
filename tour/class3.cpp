#include <iostream>
using namespace std; 

class Date { 

    int d; 
    int m; 
    int y;

    public: 
        Date (int dd, int mm, int yy) : 
        d{dd},m{mm},y{yy} 
        { 
            if (d < 1) { 
                d = 1;
            } 
            


        }

    void print_date () {
        cout << "month : " << m << endl ; 
        cout << "day : " << d << endl; 
        cout << "year : " << y << endl; 


    }
};


int main () { 

    Date hbday {25,9,1998};
    Date mbday {-16,5,1998};

    hbday.print_date(); 
    mbday.print_date(); 




}