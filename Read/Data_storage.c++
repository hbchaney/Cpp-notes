//going over how data is stored within c ++ 

#include <iostream>
using namespace std; 

int main() 
{
    //for this example we will look at how mulitplying will affect a few different output types

    int number = 5; 
    int result1;
    float result2; 

    result1 = number * 1.5; 
    result2 = number * 1.5;

    cout << "result 1 is: " << result1 << endl; 
    cout << "result 2 is: " << result2 << endl; 

    // to force result 2 to be an int you need to use the static cast function 

    cout << static_cast<int>(number * 1.5) << endl;



    


}