//Kira Cornejo
//CSCI 1011
//Week 13 Q2
//Write a function to compute the value of the following polynomial
#include <iostream>
#include <math.h>
using namespace std;

int polynomial(int x)
{
    int polynomial;
    //polynomial equation
    polynomial = (3 * pow(x,5)) + (2 * pow(x,4)) - (5 * pow(x,3)) - pow(x,2) + (7 * x) + 6;
    return polynomial;
}

int main()
{
    int x;
    //specifically asking computer to compute polynomial for value x at 5 and 8
    cout << "When x is 5, the polynomial value is: " << polynomial(5) << endl;
    cout << "When x is 8, the polynomial value is: " << polynomial(8) << endl;

    return 0;
}
