#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <map>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int num;
	cin >> num;

	if (num == 0)
	{
		cout << 0;
		return 0;
	}

	vector<float> vGrade;

	for (int i = 0; i < num; i++)
	{
		float grade;
		cin >> grade;

		vGrade.push_back(grade);
	}

	sort(vGrade.begin(), vGrade.end());

	float exec;
	exec = round(num * 0.15);
	float sum = 0;

	for (int i = exec; i < num - exec; i++)
	{
		sum += vGrade[i];
	}

	float vSize = vGrade.size();
	if (vSize != 0)
	{
		float aver = sum / (num - (exec * 2));

		int result = round(aver);

		cout << result;
	}

	return 0;
}