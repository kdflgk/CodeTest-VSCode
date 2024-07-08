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

	while (true)
	{
		string str;
		getline(cin, str);

		if (str == ".")
			break;

		stack<char> sChar;

		bool flag = false;
		for (int i = 0; i < str.length(); i++)
		{
			if (str[i] == '(' || str[i] == '[')
			{
				sChar.push(str[i]);
			}
			else if (str[i] == ')')
			{
				if (!sChar.empty() && sChar.top() == '(')
					sChar.pop();
				else
				{
					flag = true;
					break;
				}
			}
			else if (str[i] == ']')
			{
				if (!sChar.empty() && sChar.top() == '[')
					sChar.pop();
				else
				{
					flag = true;
					break;
				}
			}
		}
		if (flag == false && sChar.empty())
			cout << "yes\n";
		else
			cout << "no\n";
	}

	return 0;
}
