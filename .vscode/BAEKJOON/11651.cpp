#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

bool Compare(pair<int, int> pos1, pair<int, int> pos2);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int num;
	cin >> num;

	vector<pair<int, int>> position;
	int x, y;
	for (int i = 0; i < num; i++)
	{
		cin >> x >> y;
		position.push_back(make_pair(x, y));
	}

	sort(position.begin(), position.end(), Compare);

	for (auto value : position)
	{
		cout << value.first << " " << value.second << "\n";
	}

	return 0;
}

bool Compare(pair<int, int> pos1, pair<int, int> pos2)
{
	if (pos1.second == pos2.second)
		return pos1.first < pos2.first;

	return pos1.second < pos2.second;
}