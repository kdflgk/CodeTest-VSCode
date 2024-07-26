#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>
#include <algorithm>
#include <cctype>

#include <vector>
#include <queue>

using namespace std;

void BFS(int start, vector<bool> &visited, vector<vector<int>> &graph);
void DFS(int start, vector<bool> &visited, vector<vector<int>> &graph);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, v;
    cin >> n >> m >> v;

    vector<vector<int>> graph(n + 1, vector<int>(n + 1));
    vector<bool> BFSvisited(n + 1, false);
    vector<bool> DFSvisited(n + 1, false);

    for (int i = 0; i < m; i++)
    {
        int first, second;
        cin >> first >> second;

        graph[first].push_back(second);
        graph[second].push_back(first);
    }

    for(int i=0;i<graph.size();i++)
    {
        sort(graph[i].begin(),graph[i].end());
    }

    DFS(v, DFSvisited, graph);
    cout << "\n";
    BFS(v, BFSvisited, graph);

    return 0;
}

void BFS(int start, vector<bool> &visited, vector<vector<int>> &graph)
{
    queue<int> que;
    que.push(start);
    visited[start] = true;

    cout << start << " ";

    while (!que.empty())
    {
        int x = que.front();
        que.pop();

        for (int i = 1; i < graph[x].size(); i++)
        {
            int y = graph[x][i];
            if (!visited[y])
            {
                que.push(y);
                visited[y] = true;
                if (y != 0)
                    cout << y << " ";
            }
        }
    }
}

void DFS(int start, vector<bool> &visited, vector<vector<int>> &graph)
{
    visited[start] = true;

    if (start != 0)
        cout << start << " ";

    for (int i = 1; i < graph[start].size(); i++)
    {
        int x = graph[start][i];

        if (!visited[x])
            DFS(x, visited, graph);
    }
}