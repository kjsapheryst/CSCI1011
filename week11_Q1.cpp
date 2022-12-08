//Kira Cornejo
//CSCI 1011
//Week 11 Q1
//Write a program to let the user enter a series of numbers 
#include <iostream>
using namespace std;

int main()
{
    int arr[9], sum, smallest, i;
	
	cout << "Please enter a series of a number, ended by 0: " << endl;
    cin >> arr[i];
	
    for(int i = 0; i < 10; i++)
    {
        sum = 0;
        sum += arr[i];
        cout << "The sum is: " << sum << endl;

        if(arr[i] < smallest)
        {
            cout << "The smallest nunber is: " << i << endl;
        }

        if(arr[i] % 2 == 0)
        {
            cout << "There are " << arr[i] << " even numbers." << endl;
        }
        break;
    }
    return 0;
}