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

    vector<long long> trangle(101);
    trangle[0] = 0;
    trangle[1] = 1;
    trangle[2] = 1;
    trangle[3] = 1;

    for (int i = 4; i < trangle.size(); i++)
    {
        trangle[i] = trangle[i - 3] + trangle[i - 2];
    }

    for (auto value : testcase)
    {
        cout << trangle[value] << "\n";
    }

    return 0;
}