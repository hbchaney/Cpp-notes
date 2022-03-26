#include <iostream> 
#include <vector> 
#include <string> 

using namespace std; 

class Person { 
    int age; 
    string name; 

    public: 
    Person (int a, string n) : age{a}, name{n} {} 

    friend ostream& operator<<(ostream&,const Person&); // copies person 

    void operator[] (int i) {
        age = i;
        cout << "new age = " << age << endl;
    }
    
};


ostream& operator<<(ostream& os,const Person& p ) { 

    return os << "name : " << p.name << " and age : " << p.age ; 

}


int main () { 
    // cout << "hello there" << endl; 
    Person H {23,"harrison"}; 
    cout << H << endl; 
    H[6];
    cout << H << endl; 
    Person* C = &H;
    cout << *C << endl;  

    return 0; 

}