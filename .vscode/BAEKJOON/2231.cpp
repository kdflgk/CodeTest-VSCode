#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

int num2231()
{
	int nNumber;
	int result;

	vector<int> vConstructor;

	scanf_s("%d", &nNumber);

	int nTemp;

	for (int i = 0; i < nNumber; i++)
	{
		int num1 = i / 1000000;
		nTemp = i % 1000000;

		int num2 = nTemp / 100000;
		nTemp = nTemp % 100000;

		int num3 = nTemp / 10000;
		nTemp = nTemp % 10000;

		int num4 = nTemp / 1000;
		nTemp = nTemp % 1000;

		int num5 = nTemp / 100;
		nTemp = nTemp % 100;

		int num6 = nTemp / 10;
		nTemp = nTemp % 10;

		int num7 = nTemp;

		int check = i + num1 + num2 + num3 + num4 + num5 + num6 + num7;

		if (check == nNumber)
			vConstructor.push_back(i);
	}

	result = nNumber;
	for (auto num : vConstructor)
	{
		if (result > num)
			result = num;
	}

	if (vConstructor.size() == 0)
		result = 0;
	printf("%d", result);

	return 0;
}