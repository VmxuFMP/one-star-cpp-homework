#include <iostream>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int test_cases;
	int months[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	string weekname[] = { "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday" }; //2011年1月1日為星期六
	int M, D;
	cin >> test_cases;

	while (test_cases--) {
		cin >> M >> D;
		int day = 0;
		for (int i = 0; i < M - 1; i++) {
			day = day + months[i];
		}
		day = day + D;

		int daytoweeknum = (day - 1) % 7;

		cout << weekname[daytoweeknum] << "\n";
	}
	return 0;
}

/*
UVa 12019 題目

Doom’s day algorithm is not a method to compute which day the world will end. 
It is an algorithm created by the mathematician John Horton Conway, to calculate which day of the week (Monday, Tuesday, etc.) corresponds to a certain date.
This algorithm is based in the idea of the doomsday, a certain day of the week which always occurs in the same dates. 
For example, 4/4 (the 4th of April), 6/6 (the 6th of June), 8/8 (the 8th of August), 10/10 (the 10th of October) and 12/12 (the 12th of December) are dates which always occur in doomsday. All years have their own doomsday.
In year 2011, doomsday is Monday. So all of 4/4, 6/6, 8/8, 10/10 and 12/12 are Mondays. 
Using that information, you can easily compute any other date. For example, the 13th of December 2011 will be Tuesday, the 14th of December 2011 will be Wednesday, etc.
Other days which occur on doomsday are 5/9, 9/5, 7/11 and 11/7. Also, in leap years, we have the following doomsdays: 
1/11 (the 11th of January) and 2/22 (the 22nd of Febrary), and in non-leap years 1/10 and 2/21.
Given a date of year 2011, you have to compute which day of the week it occurs.

輸入說明：
The input can contain different test cases. The first line of the input indicates the number of test cases.
For each test case, there is a line with two numbers: M D. M represents the month (from 1 to 12) and D represents the day (from 1 to 31). 
The date will always be valid.

輸出說明：
For each test case, you have to output the day of the week where that date occurs in 2011. 
The days of the week will be: Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday.
*/
