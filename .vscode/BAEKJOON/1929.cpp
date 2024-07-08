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

	int m, n;
	cin >> m >> n;

	vector<bool> check;

	for (int i = 0; i <= n; i++)
		check.push_back(true);

	for (int i = 2; i <= sqrt(n); i++)
	{
		if (check[i] == true)
		{
			for (int j = i * i; j <= n; j += i)
			{
				check[j] = false;
			}
		}
	}

	for (int i = m; i <= n; i++)
	{
		if (i == 1)
			continue;

		if (check[i] == true)
			cout << i << "\n";
	}

	return 0;
}