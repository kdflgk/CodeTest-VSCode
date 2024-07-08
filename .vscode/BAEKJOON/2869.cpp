#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	int a, b, v;
	cin >> a;
	cin >> b;
	cin >> v;

	int day;
	int metre;

	if (a >= v)
	{
		day = 1;
	}
	else if (a < v)
	{
		metre = v - b;

		day = metre / (a - b);

		if (metre % (a - b) != 0)
			day += 1;
	}

	cout << day;

	return 0;
}