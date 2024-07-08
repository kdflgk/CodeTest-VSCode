#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

bool isPrimeNumber(int num);

int num1978()
{
	int nCount;
	vector<int> nNum;

	scanf_s("%d", &nCount);

	for (int i = 0; i < nCount; i++)
	{
		int temp;
		scanf_s("%d ", &temp);
		nNum.push_back(temp);
	}

	int result = 0;
	for (int i = 0; i < nCount; i++)
	{
		if (isPrimeNumber(nNum[i]))
			result++;
	}

	printf("%d", result);

	return 0;
}

bool isPrimeNumber(int num)
{
	if (num <= 1) return false;

	for (int i = 2; i < num; i++)
		if (num % i == 0) return false;

	return true;
}