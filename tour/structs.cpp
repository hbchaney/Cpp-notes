#include <iostream> 
#include <string>
using namespace std; 

struct person { 
    string name; 
    int height;
    int age; 
};

int main () { 

    person Harrison {"Harrison",75,4} ; 
    person Marianne ; 

    cout << Harrison.age << endl; 
    cout << Marianne.age << endl; 

}
