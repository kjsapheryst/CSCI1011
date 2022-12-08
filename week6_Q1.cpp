// Kira Cornejo
// CSCI 1011 002
// Lab Week 6
// Program to read number of hours worked in a week and output
// worker's gross pay, withholding amount, and net pay for each week
#include <iostream> 
using namespace std;
int main()
{

	//defined variables used throughout program
	double hours, overtime, grossPay, socialSecurity, federalTax, stateTax, unionDues, netPay;

	cout << "Enter the total hours: " << endl;
	cin >> hours;
	
	//if hours worked is less than 40 hours
	if (hours < 40)
	{
		grossPay = 16.78 * 40;
	}
	//if hours worked is greater than or equal to 40 hours
	else if (hours >= 40)
	{
		overtime = hours - 40;
		grossPay = (16.78 * 40) + ((16.78 * 1.5) * overtime);
	}

	//calculations for all other withholding amounts
	socialSecurity = grossPay * .06;
	federalTax = grossPay * .14;
	stateTax = grossPay * 0.05;
	unionDues = 10.00;
	
	//take-home pay calculation after all withholding amounts are subtracted
	netPay = grossPay - (socialSecurity + federalTax + stateTax + unionDues);	

	cout << "Gross Pay: $" << grossPay << endl;
	cout << "Social Security Tax: $" << socialSecurity << endl;
	cout << "Federal Income Tax: $" << federalTax << endl;
	cout << "State Income Tax: $" << stateTax << endl;
	cout << "Union Dues: $" << unionDues << endl;
	cout << "Net Pay: $" << netPay << endl;

	return 0;

}