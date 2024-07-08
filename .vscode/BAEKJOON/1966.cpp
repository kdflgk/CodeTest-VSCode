#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int num;
	cin >> num;

	vector<int> vResult;
	for (int i = 0; i < num; i++)
	{
		int DocCount, DocTarget;
		cin >> DocCount >> DocTarget;

		queue<pair<int, int>> qDoc;
		priority_queue<int> pqDoc;
		for (int j = 0; j < DocCount; j++)
		{
			int turn;
			cin >> turn;
			qDoc.push(make_pair(turn, j));
			pqDoc.push(turn);
		}

		if (qDoc.size() == 1)
		{
			vResult.push_back(1);
			qDoc.pop();
		}

		int roop = 1;
		while (!qDoc.empty())
		{
			if (qDoc.front().first == pqDoc.top())
			{
				if (!qDoc.empty() && qDoc.front().second == DocTarget)
				{
					vResult.push_back(roop);
					break;
				}

				qDoc.pop();
				pqDoc.pop();
				roop++;
			}
			else
			{
				qDoc.push(qDoc.front());
				qDoc.pop();
			}
		}
	}

	for (auto value : vResult)
	{
		cout << value << "\n";
	}

	return 0;
}