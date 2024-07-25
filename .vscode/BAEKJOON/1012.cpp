#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>
#include <algorithm>
#include <cctype>

#include <vector>

using namespace std;

void dfs(int x, int y, vector<vector<int>> &farm, vector<vector<bool>> &visited);

int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};

int m, n, k;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int num;
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        cin >> m >> n >> k;

        vector<vector<int>> farm(m, vector<int>(n, 0));
        vector<vector<bool>> visited(m, vector<bool>(n, false));

        for (int j = 0; j < k; j++)
        {
            int x, y;
            cin >> x >> y;
            farm[x][y] = 1;
        }

        int count = 0;

        for (int x = 0; x < m; x++)
        {
            for (int y = 0; y < n; y++)
            {
                if (farm[x][y] == 1 && visited[x][y] == false)
                {
                    dfs(x, y, farm, visited);
                    count++;
                }
            }
        }

        cout << count << "\n";
    }

    return 0;
}

void dfs(int x, int y, vector<vector<int>> &farm, vector<vector<bool>> &visited)
{
    visited[x][y] = true;

    for (int i = 0; i < 4; i++)
    {
        int nx, ny;
        nx = x + dx[i];
        ny = y + dy[i];

        if (nx >= 0 && nx < m && ny >= 0 && ny < n)
        {
            if (farm[nx][ny] == 1 && visited[nx][ny] == false)
            {
                dfs(nx, ny, farm, visited);
            }
        }
    }
}