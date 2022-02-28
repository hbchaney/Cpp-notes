//printing hello world in C++
#include <iostream>
#include <stdio.h>
using namespace std; 

int main() 
{
    string input; 
    input = "Harrison hello world"; //automatically does \n
    cout << input <<endl; 
    printf("can i print like this too?\n"); //looks like i can 


    string food; 
    cin >> food; 
    cout << "the new fav food is " << food << endl;
    return(0);
}