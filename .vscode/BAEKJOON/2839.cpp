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

	vector<pair<int, int>> result;

	for (int i = 0; i <= (num / 5); i++)
	{
		for (int j = 0; j <= (num / 3); j++)
		{
			int test = i * 5 + 3 * j;
			if ((i * 5 + 3 * j) == num)
			{
				result.push_back(make_pair(i, j));
			}
		}
	}

	int minResult = -1;
	for (auto value : result)
	{
		int temp = result[0].first + result[0].second;
		minResult = min(temp, (value.first + value.second));
	}

	cout << minResult;

	return 0;
}