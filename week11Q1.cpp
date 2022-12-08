//Kira Cornejo
//CSCI 1011
//Week 11 Q1
//Write a program to let the user enter a series of numbers 
#include <iostream>
using namespace std;

int main()
{
    //define variables and array size used throughout program
    int num[9], i, small, sum, even;
    sum = 0;
    //input from user
    cout << "Please enter a series of numbers, ended by 0." << endl;


    for(int i = 0; i < 9; i++)
    {
        cin >> num[i];
        //to add values in array
        sum += num[i];
    }
    cout << "The sum is: " << sum << endl;
    
    
    for(i = 0; i < 9; i++)
    {
        //to find smallest value in array
        if(num[i] < 0)
        {
            small = num[0];
            small = num[i];
        }
    }
    cout << "The smallest value is: " << small << endl;


    even = 0;
    for(i = 0; i < 8; i++)
    {
        //to find even numbers in array
       if(num[i] % 2 == 0)
       {
            even++;
       }
    }
    cout << "There are " << even << " even numbers." << endl;

    return 0;
}