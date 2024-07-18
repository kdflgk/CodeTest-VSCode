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
    int total;
    cin >> num >> total;

    vector<int> coin;
    int result = 0;

    for (int i = 0; i < num; i++)
    {
        int c;
        cin >> c;
        coin.push_back(c);
    }

    sort(coin.begin(), coin.end(), greater<int>());

    for (auto value : coin)
    {
        while (1)
        {
            if (total < value)
                break;
            if (total - value >= 0)
            {
                result++;
                total -= value;
            }
        }
    }

    cout << result;

    return 0;
}