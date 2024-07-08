#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int num, order;
	cin >> num >> order;

	queue<int> human;

	for (int i = 0; i < num; i++)
	{
		human.push(i + 1);
	}

	cout << "<";

	while (human.size() != 0)
	{
		for (int i = 0; i < order - 1; i++)
		{
			human.push(human.front());
			human.pop();
		}
		cout << human.front();
		human.pop();

		if (human.size() > 0)
			cout << ", ";
	}

	cout << ">";

	return 0;
}