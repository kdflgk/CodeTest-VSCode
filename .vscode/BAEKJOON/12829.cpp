#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>
#include <vector>
#include <map>

using namespace std;

int main()
{
	int num;
	cin >> num;

	string str;
	cin >> str;

	long result;
	long strNum = 0;
	long r = 1;

	//a=1 b=2 c=3 ....... z=26
	//int strNum = str - 'a' + 1;
	for (int i = 0; i < num; i++)
	{
		strNum += ((str[i] - 'a' + 1) * r) % 1234567891;
		r = (r * 31) % 1234567891;
	}

	result = strNum % 1234567891;

	cout << result;

	return 0;
}