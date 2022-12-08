//Kira Cornejo
//CSCI 1010 002
//Lab Week 10 Q2
//Write a program to add up 10 random numbers, all the random numbers should be in the range of [20, 80].
#include <iostream>
#include<cstdlib>
using namespace std;

int main()
{
    int num;
    srand(time(0));

    num = rand() % 20 - 80;

    for(int i = 0; i < 10; i++)
    {
        cout << "The random numbers are: " << num << endl;
    }
    return 0;
}