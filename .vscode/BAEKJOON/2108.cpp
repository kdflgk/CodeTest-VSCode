#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <map>

using namespace std;

int comp(pair<int, int> a, pair<int, int> b);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int num;
    cin >> num;

    vector<int> vNum;
    for (int i = 0; i < num; i++)
    {
        int number;
        cin >> number;
        vNum.push_back(number);
    }

    int temp = 0;
    for (auto value : vNum)
    {
        temp += value;
    }
    int aver = round((float)temp / num);
    cout << aver << "\n";

    sort(vNum.begin(), vNum.end());
    cout << vNum[floor(vNum.size() / 2)] << "\n";

    // 최빈값
    int mode[8001] = {0};
    for (int value : vNum)
    {
        mode[value + 4000]++; // 음수 값을 포함하도록 조정
    }

    int maxvalue = 0;
    vector<int> vMode;
    for (int i = 0; i < 8001; i++)
    {
        if (mode[i] > maxvalue)
        {
            maxvalue = mode[i];
            vMode.clear();
            vMode.push_back(i - 4000);
        }
        else if (mode[i] == maxvalue)
        {
            vMode.push_back(i - 4000);
        }
    }
    
    int result = vMode.size() > 1 ? vMode[1] : vMode[0];
    cout << result << "\n";

    cout << vNum[num - 1] - vNum[0] << "\n";

    return 0;
}

int comp(pair<int, int> a, pair<int, int> b)
{
    if (a.first == b.first)
        return a.second > b.second;
    return a.first > b.first;
}