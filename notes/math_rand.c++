//here are some notes on printing in c++ 

#include <iostream>
#include <math.h> // i think these functions are from this library 
#include <stdio.h>
#include <cstdlib>
#include <ctime> 

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

    //abs value of int 
    int abs_num = -4; 
    
    cout << "used to be : " << abs_num << " now is : " << abs(abs_num) << endl;

    //abs value of a float 
    float abs_flt = -4.05;

    cout << "used to be : " << abs_flt << " now is : " << fabs(abs_flt) << endl;

    //generating a random number between 0 and 1 
    //rand() generates a random number between 

    int dice = 0; 
    srand(time(0)); //uses time as the rand seed

    dice = (rand() % 6 ) + 1; //takes this rand number and uses modulo need to add 1 cause math

    cout << "this is what the dice rolled " << dice << endl;


    return(0);

}


