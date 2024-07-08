#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

bool compareWith(string a, string b);

int main()
{
	int count;
	cin >> count;

	vector<string> vWord;
	string word;
	for (int i = 0; i < count; i++)
	{
		cin >> word;
		if (find(vWord.begin(), vWord.end(), word) == vWord.end())
			vWord.push_back(word);
	}

	sort(vWord.begin(), vWord.end(), compareWith);

	for (auto value : vWord)
	{
		cout << value << endl;
	}

	return 0;
}

bool compareWith(string a, string b)
{
	if (a.length() == b.length())
		return a < b;
	return a.length() < b.length();
}