#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>
#include <algorithm>
#include <cctype>

#include <vector>
#include <queue>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int num;
    cin >> num;

    int connect;
    cin >> connect;
 
    vector<vector<int>> pc(num + 1);
    vector<bool> visited(num + 1, false);

    for (int i = 0; i < connect; i++)
    {
        int n;
        int m;
        cin >> n >> m;

        pc[m].push_back(n);
        pc[n].push_back(m);
    }

    queue<int> que;
    que.push(1);
    visited[1] = true;

    int count = 0;
    while (!que.empty())
    {
        int cur = que.front();
        que.pop();

        for (int i = 0; i < pc[cur].size(); i++)
        {
            int next = pc[cur][i];
            if (!visited[next])
            {
                que.push(next);
                visited[next] = true;
                count++;
            }
        }
    }

    cout << count;

    return 0;
}