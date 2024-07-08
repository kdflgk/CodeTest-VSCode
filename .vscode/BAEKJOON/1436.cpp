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

	vector<int> vMovie;
	int movie;
	string str;
	for (int i = 0; i < 2147483647; i++)
	{
		str = to_string(i);

		if (str.find("666") != string::npos)
		{
			movie = atoi(str.c_str());
			vMovie.push_back(movie);

			if (vMovie.size() == num)
				break;
		}
	}

	cout << vMovie.at(num - 1);

	return 0;
}
