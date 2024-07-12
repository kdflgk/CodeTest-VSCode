#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int num;
    cin >> num;

    vector<string> result;
    stack<int> stackSeq;

    int index = 1;
    for (int i = 0; i < num; i++)
    {
        int value;
        cin >> value;

        while (index <= value)
        {
            stackSeq.push(index);
            result.push_back("+");
            index++;
        }

        if (stackSeq.top() == value)
        {
            stackSeq.pop();
            result.push_back("-");
        }
        else
        {
            cout << "NO";
            return 0;
        }
    }

    for (auto value : result)
    {
        cout << value << "\n";
    }

    return 0;
}