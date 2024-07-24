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
    int plus;
    cin >> num >> plus;

    vector<int> number(num);

    for (int i = 0; i < num; i++)
    {
        cin >>number[i];
    }

    vector<int> interval(num+1,0);
    for(int i=1;i<=num;i++)
    {
        interval[i]=interval[i-1]+number[i-1];
    }

    for (int i = 0; i < plus; i++)
    {
        int start, end;
        cin >> start >> end;
        cout << interval[end]-interval[start-1] << "\n";
    }

    return 0;
}