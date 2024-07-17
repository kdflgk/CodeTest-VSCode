#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>
#include <algorithm>
#include <cctype>

#include <vector>
#include <queue>
#include <stack>
#include <map>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int num;
    int pnum;
    cin >> num >> pnum;

    string name;
    map<int,string > ipocket;
    map<string, int> spocket;

    for (int i = 1; i <= num; i++)
    {
        string str;
        cin >> str;

        ipocket.insert(make_pair(i, str));
        spocket.insert(make_pair(str, i));
    }

    for (int i = 0; i < pnum; i++)
    {
        string str;
        cin >> str;

        if (isdigit(str[0]) == 0)
        {
            cout<<spocket.find(str)->second<<"\n";
        }
        else
        {
            cout<<ipocket.find(stoi(str))->second<<"\n";
        }
    }

    return 0;
}