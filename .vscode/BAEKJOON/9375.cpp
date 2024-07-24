#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>
#include <algorithm>
#include <cctype>

#include <map>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int num;
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        int n;
        cin >> n;

        map<string, int> passion;

        for (int j = 0; j < n; j++)
        {
            string cloth;
            string type;
            cin >> cloth >> type;

            if (passion.find(type) == passion.end())
                passion.insert({type, 1});
            else
                passion[type]++;
        }

        int result = 1;

        for (auto value : passion)
        {
            result *= (value.second + 1);
        }

        cout << result - 1 << "\n";
    }

    return 0;
}