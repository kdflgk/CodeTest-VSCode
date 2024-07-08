#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

bool Compare(pair<int, string> user1, pair<int, string> user2);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int num;
	cin >> num;

	vector<pair<int, string>> user;

	int age;
	string name;
	for (int i = 0; i < num; i++)
	{
		cin >> age >> name;
		user.push_back(make_pair(age, name));
	}

	//sort(user.begin(), user.end(), Compare);
	stable_sort(user.begin(), user.end(), Compare);

	for (auto value : user)
	{
		cout << value.first << " " << value.second << "\n";
	}

	return 0;
}

bool Compare(pair<int, string> user1, pair<int, string> user2)
{
	return user1.first < user2.first;
}