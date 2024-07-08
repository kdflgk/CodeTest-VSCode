#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	int testcase;
	cin >> testcase;

	vector<pair<int, int>> vCase;
	int k, n;
	for (int t = 0; t < testcase; t++)
	{
		cin >> k;
		cin >> n;

		vCase.push_back(make_pair(k, n));
	}

	//a층의 b호에 살려면 자신의 아래(a-1)층의 1호부터 b호까지 사람들의 수의 합만큼 사람들을 데려와 살아야 한다
	/*
	4층	1	6	21	56	126
	3층	1	5	15	35	70
	2층	1	4	10	20	35
	1층	1	3	6	10	15
	0층	1	2	3	4	5	6	7	8	9	10	11	12	13	14
	*/

	int human[15][14] = { 0 };
	int num = 0;
	for (int i = 0; i < 15; i++)	//층
	{
		human[i][0] = 1;
		for (int j = 1; j < 14; j++)	//호
		{
			if (i == 0)
				human[i][j] = human[i][j - 1] + 1;
			else if (i > 0)
				human[i][j] = human[i][j - 1] + human[i - 1][j];
		}
	}

	int floor, roomnumber;
	for (int a = 0; a < testcase; a++)
	{
		floor = vCase.at(a).first;
		roomnumber = vCase.at(a).second;

		num = human[floor][roomnumber - 1];

		cout << num << endl;
	}

	return 0;
}