#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

int Factorial(int num);

int main()
{
	int n, k;

	cin >> n;
	cin >> k;

	int num;

	num = Factorial(n) / (Factorial(k) * Factorial(n - k));

	cout << num;

	return 0;
}

int Factorial(int num)
{
	int result = 1;

	for (int i = 0; i < num; i++)
	{
		if (num > i)
			result *= (num - i);
	}

	return result;
}