//Kira Cornejo
//CSCI 1011
//Week 11 Q1
//Write a program to let the user enter a series of numbers 
#include <iostream>
using namespace std;

int main()
{
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, sum, i;
	
	cout << "Please enter a series of a number, ended by 0: " << endl;
    cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6 >> n7 >> n8 >> n9;
	
    for(int i = 0; i < 10; i++)
    {
        sum = n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8 + n9;
        

        cout << "The sum is: " << sum << endl;

        break;
    }
    return 0;
}