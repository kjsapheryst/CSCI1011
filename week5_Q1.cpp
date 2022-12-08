#include <iostream>
#include <math.h>
using namespace std;

int main(){

double t, v, w;

cout << "Enter temperature: " << endl;
cin >> t;

cout << "Enter miles per hour: " << endl;
cin >> v;

w = 35.74 + (0.6215 * t) + ((0.4275 * t) - 35.75) * pow(v,0.16);
cout << "The wind chill is: " << w << endl;

    return 0;
}