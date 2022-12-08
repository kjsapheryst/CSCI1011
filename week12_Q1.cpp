//Kira Cornejo
//CSCI 1011
//Week 12 Q1
//Write a program enter 10 integers in an array, and then calculate the average value of the numbers
#include <iostream>
using namespace std;

int main()
{
    //declare array size, staring value for sum
    int a[10], sum = 0;
    //get user input
    cout << "Please enter 10 integers: " << endl;
    //will loop 10 times
    for(int i = 0; i < 10; i++)
    {
        cin >> a[i];
        //sum calculation
        sum = sum + a[i];
    }
    //output sum 
    cout << "The sum of the 10 integers is: " << sum << endl;

    return 0;
}
