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

    map<string, string> spw;

    for (int i = 0; i < num; i++)
    {
        string site, password;
        cin >> site >> password;
        spw.insert(make_pair(site, password));
    }

    vector<string> vPassword;

    for (int j = 0; j < mum; j++)
    {
        string site;
        cin >> site;

        if (spw.find(site) != spw.end())
        {
            vPassword.push_back(spw.find(site)->second);
        }
    }

    for (auto value : vPassword)
    {
        cout << value << "\n";
    }

    return 0;
}