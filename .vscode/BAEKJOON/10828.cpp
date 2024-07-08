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

	stack<int> sNum;
	vector<string> vStr;
	vector<int> vValue;
	for (int i = 0; i < num; i++)
	{
		string command;
		int value;

		cin >> command;

		vStr.push_back(command);
		if (command == "push")
		{
			cin >> value;
			vValue.push_back(value);
		}
	}

	int v = 0;
	for (auto command : vStr)
	{
		if (command == "push")
		{
			int value = vValue[v];
			sNum.push(value);

			v++;
		}
		else if (command == "pop")
		{
			if (!sNum.empty())
			{
				cout << sNum.top() << "\n";
				sNum.pop();
			}
			else
				cout << "-1" << "\n";
		}
		else if (command == "size")
		{
			cout << sNum.size() << "\n";
		}
		else if (command == "empty")
		{
			if (sNum.empty())
				cout << "1" << "\n";
			else
				cout << "0" << "\n";
		}
		else if (command == "top")
		{
			if (!sNum.empty())
			{
				cout << sNum.top() << "\n";
			}
			else
				cout << "-1" << "\n";
		}
	}

	return 0;
}
