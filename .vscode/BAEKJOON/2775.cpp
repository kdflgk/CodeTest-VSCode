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

	//a���� bȣ�� ����� �ڽ��� �Ʒ�(a-1)���� 1ȣ���� bȣ���� ������� ���� �ո�ŭ ������� ������ ��ƾ� �Ѵ�
	/*
	4��	1	6	21	56	126
	3��	1	5	15	35	70
	2��	1	4	10	20	35
	1��	1	3	6	10	15
	0��	1	2	3	4	5	6	7	8	9	10	11	12	13	14
	*/

	int human[15][14] = { 0 };
	int num = 0;
	for (int i = 0; i < 15; i++)	//��
	{
		human[i][0] = 1;
		for (int j = 1; j < 14; j++)	//ȣ
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