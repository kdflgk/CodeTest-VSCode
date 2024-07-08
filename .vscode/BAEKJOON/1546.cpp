#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	int num;
	cin >> num;

	vector<float> score;
	float temp;

	for (int i = 0; i < num; i++)
	{
		cin >> temp;
		score.push_back(temp);
	}

	float max = 0;
	for (auto temp : score)
	{
		if (max < temp)
			max = temp;
	}

	float result = 0;
	float fScore;

	for (auto temp : score)
	{
		fScore = (temp / max) * 100.0;
		result += fScore;
	}

	result = result / num;

	cout << result;

	return 0;
}