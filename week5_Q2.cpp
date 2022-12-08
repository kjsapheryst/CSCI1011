#include <iostream>
using namespace std;

int main(){

int m, d, y, yy, x, mm, dd;

cout << "Enter a month: " << endl;
cin >> m;
cout << "Enter a day: " << endl;
cin >> d;
cout << "Enter a year: " << endl;
cin >> y;

yy = y - (14-m) / 12;
x = yy + yy / 4 - yy / 100 + yy / 400;
mm = m + 12 * ((14 - m) / 12) - 2;
dd = (d + x + (31 * mm) / 12) % 7;

if (dd == 0)
{
    cout << "The day of the week the input date falls on is Sunday." << endl;
}
else if(dd == 1)
{
    cout << "The day of the week the input date falls on is Monday." << endl;
}
else if(dd == 2)
{
    cout << "The day of the week the input date falls on is Tuesday." << endl;
}
else if(dd == 3)
{
    cout << "The day of the week the input date falls on is Wednesday." << endl;
}
else if(dd == 4)
{
    cout << "The day of the week the input date falls on is Thursday." << endl;
}
else if(dd == 5)
{
    cout << "The day of the week the input date falls on is Friday." << endl;
}
else if(dd == 6)
{
    cout << "The day of the week the input date falls on is Saturday." << endl;
}

    return 0;
}