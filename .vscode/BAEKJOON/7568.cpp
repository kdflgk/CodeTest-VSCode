#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int num;
	cin >> num;

	int human[50][3];

	int weight, height;
	for (int i = 0; i < num; i++)
	{
		cin >> weight >> height;
		human[i][0] = weight;
		human[i][1] = height;
		human[i][2] = 0;
	}

	for (int i = 0; i < num; i++)
	{
		int order = 1;

		for (int j = 0; j < num; j++)
		{
			if (i != j && human[i][0] < human[j][0] && human[i][1] < human[j][1])
				order++;
		}
		human[i][2] = order;
	}

	for (int i = 0; i < num; i++)
	{
		cout << human[i][2] << " ";
	}

	return 0;
}