#include <iostream> 
#include <string> 
using namespace std; 


class trace {

    string s;

    public: 
        trace (const string& ss) : s{ss} {}
        ~trace () { 
            cout << "hello" << endl;
        }
    friend ostream& operator<< (ostream&,const trace&);
};

ostream& operator<< (ostream& os,const trace& t) { 
    os << t.s << endl;
    return os; 
}


int main () { 
    
    for (int i=0; i<10; i++) { 
        trace har {"schneg"}; 
        cout << har << ' ' << i << endl; 
    }

}