#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>
#include <algorithm>
#include <cctype>

#include <vector>
#include <map>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int num;
    int mum;
    cin >> num >> mum;

    map<string, int > hearmap;
    vector<string> result;

    for (int i = 0; i < num; i++)
    {
        string str;
        cin >> str;
        hearmap.insert(make_pair(str,i));
    }
    for (int j = 0; j < mum; j++)
    {
        string str;
        cin >> str;

        if(hearmap.find(str)!=hearmap.end())
        {
                result.push_back(str);
        }
    }

    cout << result.size() << "\n";
    sort(result.begin(),result.end());

    for (auto value : result)
    {
        cout << value << "\n";
    }

    return 0;
}