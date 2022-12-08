// Kira Cornejo
// CSCI 1011 002
// Lab Week 6
// Calculate number of chocolate bars that should be consumed to maintain one's weight. 

#include <iostream>
using namespace std;

int main()
{
	
	//defining variables used throughout program
	char gender;
	double weight, height, BMR, chocolateBars;
	int age;

	//Input M or F, weight, height, and age for BMR calculations
	cout << "Select M (Male) or F (Female)." << endl;
	cin >> gender;
	cout << "Enter weight in pounds: " << endl;
	cin >> weight;
	cout << "Enter height in inches: " << endl;
	cin >> height;
	cout << "Enter age in years: " << endl;
	cin >> age;

	if(gender == 'F')
	{
		//BMR calculation for Female
		BMR = 655 + (4.3 * weight) + (4.7 * height) - (4.7 * age);
		
		//Chocolate bar calculation based off BMR
		chocolateBars = BMR / 230;
		cout << "You can eat " << chocolateBars << "chocolate bars!" << endl;
	}
	
	else if(gender == 'M')
	{
		//BMR calculation for Male
		BMR = 66 + (6.3 * weight) + (12.9 * height) - (6.8 * age);
		
		//Chocolate bar calculation based off BMR
		chocolateBars = BMR / 230;
		cout << "You can eat " << chocolateBars << "chocolate bars!" << endl;
	}

	return 0;
}