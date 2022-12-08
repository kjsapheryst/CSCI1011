// Kira Cornejo
// CSCI 1011 002
// Week 7 Q1
//Write a program to score the paper-rock-scissor game
#include <iostream>
using namespace std;

int main()
{
    //declaring variables used throughout the program
    char one, two;
    
    //input of player one's move
    cout << "Player 1, please show your choice: " << endl;
    cin >> one;
    //input of player two's move
    cout << "Player 2, please show your choice: " << endl;
    cin >> two;

    //based off of player one's input
    switch(one)
    {
        //if player one chooses paper
        case 'p': case 'P': 
            if(two == 'p' || two == 'P')
            {
                cout << "Tie!" << endl;
            }
            else if(two == 'r' || two == 'R')
            {
                cout << "Player 1 Wins!" << endl;
            }
            else if(two == 's' || two == 'S')
            {
                cout << "Player 2 wins!" << endl;
            }
            break;

        //if player one chooses rock
        case 'r': case 'R':
            if(two == 'p' || two == 'P')
            {
                cout << "Player 1 Wins!" << endl;
            }
            else if(two == 'r' || two == 'R')
            {
                cout << "Tie" << endl;
            }
            else if(two == 's' || two == 'S')
            {
                cout << "Player 1 wins!" << endl;
            }
            break;
        
        //if player one chooses scissors
        case 's': case 'S':
            if(two == 'p' || two == 'P')
            {
                cout << "Player 1 Wins!" << endl;
            }
            else if(two == 'r' || two == 'R')
            {
                cout << "Player 2 Wins!" << endl;
            }
            else if(two == 's' || two == 'S')
            {
                cout << "Tie!" << endl;
            }
            break;
    }

    return 0;
}