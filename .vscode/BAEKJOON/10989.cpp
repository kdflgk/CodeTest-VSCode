#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>
#include <vector>
#include <list>

using namespace std;

int main()
{
	int nWord;
	cin >> nWord;

	int sNum[10001] = { 0 };

	int num;
	for (int i = 0; i < nWord; i++)
	{
		scanf_s("%d", &num);
		sNum[num]++;
	}

	for (int i = 1; i < 10001; i++)
	{
		for (int j = 0; j < sNum[i]; j++)
		{
			printf("%d\n", i);
		}
	}

	return 0;
}