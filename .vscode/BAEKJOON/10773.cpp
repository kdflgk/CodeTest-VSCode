#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int num;
	cin >> num;

	stack<int> sMmney;
	for (int i = 0; i < num; i++)
	{
		int money;
		cin >> money;

		if (money == 0)
			sMmney.pop();
		else
			sMmney.push(money);
	}

	int total = 0;
	while (sMmney.size() != 0)
	{
		total += sMmney.top();
		sMmney.pop();
	}

	cout << total;

	return 0;
}
