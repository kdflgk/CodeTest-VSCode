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

	int num;
	cin >> num;

	queue<int> qCard;

	for (int i = 0; i < num; i++)
	{
		qCard.push(i + 1);
	}

	while (qCard.size() > 1)
	{
		qCard.pop();

		if (qCard.size() > 0)
		{
			qCard.push(qCard.front());
			qCard.pop();
		}
	}

	cout << qCard.front();

	return 0;
}