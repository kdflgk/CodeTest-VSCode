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

	vector<string> vStr;

	for (int i = 0; i < num; i++)
	{
		string str;
		cin >> str;
		vStr.push_back(str);
	}

	for (auto value : vStr)
	{
		stack<char> sChar;
		bool bYes = true;

		for (int i = 0; i < value.length(); i++)
		{
			if (value[i] == '(')
				sChar.push(value[i]);
			else if (value[i] == ')')
			{
				if (!sChar.empty() && sChar.top() == '(')
					sChar.pop();
				else
				{
					bYes = false;
					break;
				}
			}
		}

		if (bYes == true && sChar.empty())
			cout << "YES\n";
		else
			cout << "NO\n";
	}

	return 0;
}
