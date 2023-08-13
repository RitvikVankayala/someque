#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + !0;
const int INF = 1e9 + 10;
int value[N][N];
int visited[N][N];
int level[N][N];
int n, m;

vector<pair<int, int>> movements = {
    {0, 1}, {1, 0}, {-1, 0}, {0, -1}};

bool isvalid(int i, int j)
{
    return i >= 0 && j >= 0 && i < n && j < m;
}

int bfs()
{
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            mx = max(mx, value[i][j]);
        }
    }
    queue<pair<int, int>> q;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (mx == value[i][j])
            {
                q.push({i, j});
                level[i][j] = 0;
                visited[i][j] = 0;
            }
        }
    }
    int ans = 0;
    while (!q.empty())
    {
        auto v = q.front();
        int v_X = v.first;
        int v_Y = v.second;
        q.pop();
        for (auto movement : movements)
        {
            int child_x = movement.first + v_X;
            int child_y = movement.second + v_Y;
            if (!isvalid(child_x, child_y))
                continue;
            if (visited[child_x][child_y])
                continue;
            level[child_x][child_y] = level[v_X][v_Y] + 1;
            q.push({child_x, child_y});
            visited[child_x][child_y] = 1;
            ans = max(ans, level[child_x][child_y]);
        }
    }
    return ans;
}

void reset()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            visited[i][j] = 0;
            level[i][j] = INF;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        reset();
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> value[i][j];
            }
        }
    }
    return 0;
}