#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	int num1, num2;
	cin >> num1 >> num2;

	vector<int> temp1;
	for (int i = 1; i <= num1; i++)
	{
		if (num1 % i == 0)
			temp1.push_back(i);
	}

	vector<int> temp2;
	for (int i = 1; i <= num2; i++)
	{
		if (num2 % i == 0)
			temp2.push_back(i);
	}

	int max = 0;
	for (auto value1 : temp1)
	{
		for (auto value2 : temp2)
		{
			if (value1 == value2)
			{
				if (max < value1)
				{
					max = value1;
				}
			}
		}
	}

	int min;
	min = max * (num1 / max) * (num2 / max);

	cout << max << "\n" << min;

	return 0;
}