#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>
#include <vector>
#include <map>

using namespace std;

int main()
{
	int nNum;
	scanf_s("%d", &nNum);

	int value = 1;
	int index = 1;
	int temp = 6;

	while (1)
	{
		if (value >= nNum)
			break;

		value += temp;
		temp += 6;
		index++;
	}

	printf("%d\n", index);

	return 0;
}