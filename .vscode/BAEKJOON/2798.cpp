#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	int card, num;

	scanf_s("%d %d", &card, &num);

	vector<int> vCard;

	for (int i = 0; i < card; i++)
	{
		int cardnum;
		scanf_s("%d ", &cardnum);
		vCard.push_back(cardnum);
	}

	int result = 0;
	int temp = 0;

	for (int i = 0; i < vCard.size(); i++)
	{
		for (int j = i + 1; j < vCard.size(); j++)
		{
			for (int k = j + 1; k < vCard.size(); k++)
			{
				temp = vCard[i] + vCard[j] + vCard[k];

				if (num >= temp)
				{
					if (result < temp)
						result = temp;
				}
			}
		}
	}

	printf("%d", result);

	return 0;
}