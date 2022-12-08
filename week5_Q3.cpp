#include <iostream>
#include <math.h>
using namespace std;

int main(){

int x, y, x2, y2, distance;

cout << "Enter point one: " << endl;
cin >> x >> y;
cout << "Enter point two: " << endl;
cin >> x2 >> y2;

distance = sqrt(pow(x - x2, 2) + pow(y - y2, 2));
cout << "The distance between the two points is: " << distance << endl;

    return 0;
}