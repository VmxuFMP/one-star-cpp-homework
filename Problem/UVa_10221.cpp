#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
	int s, a;
	const double r = 6440;
	const double PI = acos(-1.0);
	string PM;

	while (cin >> s >> a >> PM) {
		double degree = 0;
		double radius = r + s;

		if (PM == "deg") {
			degree = a;
		}
		else if (PM == "min") {
			degree = a / 60.0;
		}

		if (degree > 180.0) {
			degree = 360.0 - degree;
		}

		double radian = degree * PI / 180.0;

		double distance = radius * radian;

		double chord_distance = sqrt(2 * radius * radius - 2 * radius * radius * cos(radian));

		cout << fixed << setprecision(6) << distance << " " << chord_distance << endl;
	}
	return 0;
}

/*
UVa 10221 題目

The radius of earth is 6440 Kilometer. There are many Satellites and Asteroids moving around the earth. If two Satellites
create an angle with the center of earth, can you find out the distance between them? 
By distance we mean both the arc and chord distances. 
Both satellites are on the same orbit
(However, please consider that they are revolving on a circular path rather than an elliptical path).

Input
The input file will contain one or more test cases.
Each test case consists of one line containing two-integer
s and a, and a string ‘min’ or ‘deg’. Here s is the distance of
the satellite from the surface of the earth and a is the angle
that the satellites make with the center of earth. It may be in minutes (′) or in degrees (◦). 
Remember that the same line will never contain minute and degree at a time.

Output
For each test case, print one line containing the required distances i.e. both arc distance and chord
distance respectively between two satellites in Kilometer. The distance will be a floating-point value
with six digits after decimal point.
Sample Input
500 30 deg
700 60 min
200 45 deg
Sample Output
3633.775503 3592.408346
124.616509 124.614927
5215.043805 5082.035982
*/
