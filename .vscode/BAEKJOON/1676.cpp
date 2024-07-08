#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int input;
	cin >> input;

	int two = 0, five = 0;
	for (int i = 1; i <= input; i++)
	{
		if (i % 2 == 0)
			two++;
		if (i % 4 == 0)
			two++;
		if (i % 8 == 0)
			two++;
		if (i % 16 == 0)
			two++;
		if (i % 5 == 0)
			five++;
		if (i % 25 == 0)
			five++;
		if (i % 125 == 0)
			five++;

	}
	int lowerNum = min(two, five);

	cout << lowerNum;

	return 0;
}