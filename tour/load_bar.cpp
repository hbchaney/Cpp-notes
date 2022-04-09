#include <iostream>
#include <thread> 
#include <chrono> 
using namespace std; 


class Bar {
    char* b; //points to the array in heap 
    int sz;  //the size of the array 
    char con = '-';

    public: 
    Bar (int size=12,char d= ' ') : sz{size}  { 
        b = new char[size];
        for (int i =0; i<size; i++) { 
            b[i] = d; 
        }
        
    }
    ~Bar() { 
        delete b; 
    }

    friend ostream& operator<< (ostream&,Bar);
    char& operator[] (int); 
    const char& operator[] (int) const; 

    friend void go_bar (int frames, Bar B) { 
        for (int i=0; i<frames; i++) { 
            int x = i % B.sz;
            int y = (i+3) % B.sz; 
            B.b[x] = ' ';
            B.b[y] = B.con;  

            cout << B << endl ; 
        }
    }

};

ostream& operator<< (ostream& os ,Bar B) { 

    this_thread::sleep_for(chrono::milliseconds(100));
    system("CLS");
    // os << "\r";
    for (int i=0; i<B.sz;i++) { 
        os << B.b[i];
    }
    os << endl; 
    for (int i=0; i<B.sz;i++) { 
        os << B.b[i];
    }
    return os; 

}

char& Bar::operator[] (int x) { 
    if (x>=0 && x<sz) { 
        return b[x];
    }
} 

const char& Bar::operator[] (int x) const { 
    if (x>=0 && x<sz) { 
        return b[x];
    }
} 


int main () { 
    Bar H {20,' '};
    go_bar(120,H);

    return 0; 
}