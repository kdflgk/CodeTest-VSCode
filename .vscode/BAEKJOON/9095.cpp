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

    vector<int> testcase;

    for (int i = 0; i < num; i++)
    {
        int n;
        cin >> n;

        testcase.push_back(n);
    }

    vector<int> result(12);
    result[0] = 0;
    result[1] = 1;
    result[2] = 2;
    result[3] = 4;

    for (int i = 4; i <= 11; i++)
    {
        result[i] = result[i - 1] + result[i - 2] + result[i - 3];
    }

    for (auto value : testcase)
    {
        cout << result[value] << "\n";
    }

    return 0;
}