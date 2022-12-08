#include <iostream>
using namespace std;

int main()
{

    int n, i;
    i = 0;

    cout << "Enter an integer: " << endl;
    cin >> n;

    do{
        i = n / 10;
        i++;

    } while (n != 0);
    cout << "The number of digits is: " << i << endl;


    return 0;
}