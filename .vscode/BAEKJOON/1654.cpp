#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int num;
    int count;
    cin >> num >> count;

    unsigned int maxi=0;
    vector<unsigned int> vLanCable;
    for (int i = 0; i < num; i++)
    {
        unsigned int meter;
        cin >> meter;
        vLanCable.push_back(meter);
        maxi = max(maxi, meter);
    }

    unsigned int left = 1, right = maxi, mid;
    unsigned int result=0;

    while (left <= right)
    {
        mid = (left + right) / 2;

        unsigned int now = 0;
        for (auto value : vLanCable)
        {
            now += (value / mid);
        }

        if (now >= count)
        {
            left = mid + 1;

            result = max(result, mid);
        }
        else
            right = mid - 1;
    }

    cout << result << "\n";

    return 0;
}