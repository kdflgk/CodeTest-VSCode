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

	string WB[8] = { "WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW", "WBWBWBWB","BWBWBWBW", "WBWBWBWB","BWBWBWBW" };
	string BW[8] = { "BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW", "WBWBWBWB","BWBWBWBW", "WBWBWBWB" };

	int n, m;
	cin >> n >> m;

	string Chess[50];

	string color;
	for (int i = 0; i < n; i++)
	{
		cin >> color;
		Chess[i] = color;
	}

	int count, wCount, bCount;
	int result = 32;
	for (int x = 0; x < n - 7; x++)
	{
		for (int y = 0; y < m - 7; y++)
		{
			wCount = 0;
			bCount = 0;
			for (int i = 0; i < 8; i++)
			{
				for (int j = 0; j < 8; j++)
				{
					if (Chess[x + i][y + j] != WB[i][j])
						wCount++;
					if (Chess[x + i][y + j] != BW[i][j])
						bCount++;
				}
			}

			count = min(wCount, bCount);
			if (result > count)
				result = count;
		}
	}

	cout << result;

	return 0;
}