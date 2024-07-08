#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int num;
	cin >> num;

	map<int, int> hCard;

	for (int i = 0; i < num; i++)
	{
		int card;
		cin >> card;
		hCard[card]++;
	}

	int num2;
	cin >> num2;

	for (int i = 0; i < num2; i++)
	{
		int card2;
		cin >> card2;

		cout << hCard[card2] << " ";
	}

	return 0;
}
