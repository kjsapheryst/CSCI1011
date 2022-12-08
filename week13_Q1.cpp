//Kira Cornejo
//CSCI 1011
//Week 13 Q1
//Write a function to take three integers x, y and n and check if x and y are both fall between 0 to n-1.
#include <iostream>
using namespace std;

int range(int x, int y, int n)
{
    int range;
    //determining if x and y are in range of n
    if(x > 0 && x <= n-1 && y > 0 && y <= n-1)
    {
        //if in range:
       range = true;
    }
    else
    {
        //if not in range:
        range = false;
    }

    return range;
}

int main()
{
    int x, y, n;
    //get user input
    cout << "Please enter two numbers: " << endl;
    cin >> x >> y;
    cout << "Please enter the check value: " << endl;
    cin >> n;

    //if x and y are in range of n
    if(range(x,y,n) == true)
    {
        cout << "Both are in range." << endl;
    }
    //if x and y are not in range of n
    else if(range(x,y,n) == false)
    {
        cout << "Not in range." << endl;
    }
    return 0;
}
