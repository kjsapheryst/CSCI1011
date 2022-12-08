//Kira Cornejo
//CSCI 1010 002
//Lab Week 10 Q1
//Write a program to convert a decimal number into its decimal value.
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    //defining variables used throught program
    long binary;
    int i, decimal, remainder;
    
    //declaring start value
    decimal = 0;
    i = 1;

    //user input binary value
    cout << "Please enter a binary number: " << endl;
    cin >> binary;

    while(binary != 0)
    {
        //decimal to binary conversion
        remainder = binary % 10;
        decimal = decimal + remainder * i;
        i = i * 2;
        binary = binary / 10;
    }

    cout << "The decimal value is: " << decimal << endl;
    return 0;
}