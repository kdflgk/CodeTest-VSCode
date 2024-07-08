#include <stdio.h>

using namespace std;

void num30802()
{
	int nPeople;
	int nTshirt, nPen;
	int nResultTshirt, nResultPen, nResultPenNum;

	int nSize[6];
	scanf_s("%d", &nPeople);
	scanf_s("%d %d %d %d %d %d", &nSize[0], &nSize[1], &nSize[2], &nSize[3], &nSize[4], &nSize[5]);
	scanf_s("%d %d", &nTshirt, &nPen);

	int temp = 0;

	for (int i = 0; i < sizeof(nSize) / sizeof(nSize[0]); i++)
	{
		int test = nSize[i];
		int num = nSize[i] / nTshirt;

		if (nSize[i] % nTshirt == 0)
			temp += num;
		else
			temp += num + 1;
	}

	nResultTshirt = temp;
	nResultPen = nPeople / nPen;
	nResultPenNum = nPeople % nPen;

	printf("%d\n%d %d", nResultTshirt, nResultPen, nResultPenNum);
}