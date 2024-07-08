#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int num;
	cin >> num;

	vector<int> vNum;
	int n;

	for (int i = 0; i < num; i++)
	{
		cin >> n;
		vNum.push_back(n);
	}

	std::sort(vNum.begin(), vNum.end());

	for (int i = 0; i < num; i++)
	{
		cout << vNum[i] << '\n';
	}

	return 0;
}