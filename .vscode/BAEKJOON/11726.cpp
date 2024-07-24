#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>
#include <algorithm>
#include <cctype>

#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int num;
    cin >> num;

    vector<long long> testcase(num+1);
    testcase[0] = 0;
    testcase[1] = 1;
    testcase[2] = 2;
    for (int i = 3; i <= num; i++)
    {
        testcase[i] = (testcase[i - 1] + testcase[i - 2]) % 10007;
    }

    cout << testcase[num];

    return 0;
}