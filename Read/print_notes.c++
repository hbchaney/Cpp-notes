//here are some notes on printing in c++ 

#include <iostream>
#include <math.h> // i think these functions are from this library 
#include <stdio.h>

using namespace std;

int main() 
{
    
    //small example of a lot of the math functions available 


    //power
    int power; 
    power = pow(4,2);

    cout << "power : " << power << endl; 

    //square root
    float square_root;
    square_root = sqrt(4.0);

    cout << "the root is : " << square_root << endl; 

    //abs value 
    int abs_num = -4; 
    
    cout << "used to be : " << abs_num << " now is : " << abs(abs_num) << endl;






    
    
    return(0);

}


