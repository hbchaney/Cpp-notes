//to create a data array with strings 

#include <iostream>
using namespace std; 

int main() 
{
    //creating an array of strings to store names 
    string playerName[2]; 
    //this string array can store two string variables 

    //playerName[0] = "Harrison Chaney";
    //playerName[1] = "Marianne Sawyer";

    cout << "Player 1 what is your name : "; 
    cin >> playerName[0];
    //cout << endl; 

    cout << "Player 2 what is your name : "; 
    cin >> playerName[1]; 
    //cout << endl;

    cout << "the player names are respectiviely : " << playerName[0] << " and " << playerName[1] << endl; 

    return(0);



}