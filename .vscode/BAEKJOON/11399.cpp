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

    vector<int> time;

    for (int i = 0; i < num; i++)
    {
        int t;
        cin >> t;
        time.push_back(t);
    }

    sort(time.begin(), time.end());

    vector<int> vresult;
    int temp = 0;
    for (auto value : time)
    {
        temp += value;
        vresult.push_back(temp);
    }

    int result = 0;
    for (auto value : vresult)
    {
        result += value;
    }

    cout << result;

    return 0;
}