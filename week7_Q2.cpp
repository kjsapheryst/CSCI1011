// Kira Cornejo
// CSCI 1011 002
// Week 7 Q2
// compute the interest due, total amount due, and the minimum payment for a revolving credit account.
#include <iostream>
using namespace std;

int main()
{
    //declaring variables used throughout the program
    double accBalance, amntDue, interest, totalInterest, minPayment;

    cout << "Enter the account balance: " << endl;
    cin >> accBalance;

    //interest calculation if account balance is <1000
    if(accBalance < 1000)
    {
        interest = accBalance * 1.5;
        cout << "The interest due is: $ " << interest << endl;
    }
    //interest calculation if account balance is >=1000
    else if(accBalance >= 1000)
    {
        interest = (accBalance * 1.5) * 0.01;
        cout << "The interest due is: $ " << interest << endl;
    }

    amntDue = interest + accBalance;
    cout << "The total amount due is: " << amntDue << endl;

    //minimum payment calculation
    if(amntDue < 10.00)
    {
        cout << "The minimum payment is: $ " << minPayment << endl;
    }
    
    else if(amntDue >= 10.00)
    {
        minPayment = amntDue * .10;
        cout << "The minimum payment is: $ " << minPayment << endl;
    }
    return 0;
}