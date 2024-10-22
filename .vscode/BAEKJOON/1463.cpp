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

    vector<int> dp(num + 1);
    dp[0] = 0;
    dp[1] = 0;
    dp[2] = 1;

    for (int i = 2; i < num + 1; i++)
    {
        dp[i] = dp[i - 1] + 1;

        if (i % 2 == 0)
        {
            dp[i] = min(dp[i / 2] + 1, dp[i]);
        }

        if (i % 3 == 0)
        {
            dp[i] = min(dp[i / 3] + 1, dp[i]);
        }
    }

    cout << dp[num];

    return 0;
}