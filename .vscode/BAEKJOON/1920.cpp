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

	int num;
	cin >> num;

	int integer1;
	vector<int> vNum;

	int aver = 0;
	for (int i = 0; i < num; i++)
	{
		cin >> integer1;
		vNum.push_back(integer1);
	}

	sort(vNum.begin(), vNum.end());

	int num2;
	cin >> num2;

	int integer2;
	vector<int> vNum2;

	for (int i = 0; i < num2; i++)
	{
		cin >> integer2;
		vNum2.push_back(integer2);
	}

	for (int i = 0; i < num2; i++)
	{
		if (binary_search(vNum.begin(), vNum.end(), vNum2[i]))
			cout << "1" << "\n";
		else
			cout << "0" << "\n";
	}

	return 0;
}