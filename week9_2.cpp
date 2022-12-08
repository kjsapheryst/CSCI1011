//Kira Cornejo
//CSCI 1011
//Lab Week 9
//Question 2

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    //define variables used throughout program
    int i = 1;
    int n;
    double pi = 1;

    //get input from user that determines how many times the program should run
    cout << "Enter an integer: " << endl;
    cin >> n;

    while(i < n)
    {
        pi = pi + (pow(-1,i)/((2 * i) + 1));
        i++;
    }

    //pi calculation
    pi = pi * 4;

    cout << pi << endl;

    return 0;
}