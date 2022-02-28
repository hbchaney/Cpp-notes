//creating a game of chips in this example 

#include <cstdlib> 
#include <iostream> 
#include <ctime> 
using namespace std;

//creating a const for the max number of chips 

const int MAX_CHIPS = 150; 

int main() 
{
    //now initializing some variable for turns and such 

    //to decide the players turn we randomly assign a value then alternate between them 
    srand(time(0));

    int player1turn; 
    int player2turn; 

    player1turn = (rand() % 2);
    cout << player1turn << endl; 

    if (player1turn == 1)
    {
        player2turn = 0;
    }
    else
    {
        player2turn = 1; 
    }

    //cout << "player 1 : " << player1turn << endl; 
    //cout << "player 2 : " << player2turn << endl; 

    //number of total chips 

    int chips_in_pile = (rand() % MAX_CHIPS) + 1; 
    //cout << chips_in_pile << endl; 
    cout << "there is a random number of chips between 1 and 150 be the last to take a chip out" << endl;
    
    if (chips_in_pile >= 100)
    {
        cout << "the chip pile is large" << endl;
    }
    else if (chips_in_pile < 100 && chips_in_pile >= 50)
    {
        cout << "the chip pile is medium" << endl;
    }
    else 
    { 
        cout << "the chip pile is small" << endl;
    }

    while(chips_in_pile > 0)
    {
        if (player1turn > player2turn)
        {
            int player1move; 
            cout << "player 1 turn : " << endl; 
            cin >> player1move; 
            chips_in_pile = chips_in_pile -player1move; 
            player2turn = player2turn + 2; 
        }
        else
        {
            int player2move; 
            cout << "player 2 turn : " << endl;
            cin >> player2move; 
            chips_in_pile = chips_in_pile -player2move; 
            player1turn = player1turn + 2; 
        }
        //cout << chips_in_pile << endl; 
        if (chips_in_pile >= 100)
        {
            cout << "the chip pile is large" << endl;
        }
        else if (chips_in_pile < 100 && chips_in_pile >= 50)
        {
            cout << "the chip pile is medium" << endl;
        }
        else 
        { 
            cout << "the chip pile is small" << endl;
        }

    }
    if (player1turn < player2turn )
    {
        cout << "player 2 wins" << endl; 
    }
    else 
    {
        cout << "player 1 wins" << endl;
    }


}