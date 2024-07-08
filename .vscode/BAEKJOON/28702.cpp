#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	string str1, str2, str3;
	cin >> str1;
	cin >> str2;
	cin >> str3;

	int num = 0;

	if (str1 != "FizzBuzz" && str1 != "Fizz" && str1 != "Buzz")
	{
		num = stoi(str1);
		num = num + 3;
	}
	else if (str2 != "FizzBuzz" && str2 != "Fizz" && str2 != "Buzz")
	{
		num = stoi(str2);
		num = num + 2;
	}
	else if (str3 != "FizzBuzz" && str3 != "Fizz" && str3 != "Buzz")
	{
		num = stoi(str3);
		num = num + 1;
	}

	string result;

	if (num % 3 == 0 && num % 5 == 0)
		result = "FizzBuzz";
	else if (num % 3 == 0)
		result = "Fizz";
	else if (num % 5 == 0)
		result = "Buzz";
	else
		result = to_string(num);

	cout << result;

	return 0;
}