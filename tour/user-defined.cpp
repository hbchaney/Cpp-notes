#include <iostream>
#include <string> //new type from the std library

//structures 
struct Vector {

    int sz;
    double* elem;

}; //needs semicolon who wouldve guessed

void vector_init (Vector& v, int s) {

    v.elem = new double[s];
    v.sz = s;

}



void string_printer(std::string a) {
    //takes in string value and prints it 
    std::cout << a << std::endl;
}



int main() {


    //std::string a = "I am a horse";
    //string_printer(a);



    return 0; 
    
}