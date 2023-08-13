#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
vector<int> graph[N];
int visited[8][8];
int level[8][8];

int getX(string s)
{
    return s[0] - 'a';
}
int getY(string s)
{
    return s[1] - '1';
}

bool isvalid(int x, int y)
{
    return x >= 0 && y >= 0 && x < 8 && y < 8;
}
vector<pair<int, int>> movements = {
    {1, 2}, {1, -2}, {-1, 2}, {-1, -2}, {2, 1}, {2, -1}, {-2, 1}, {-2, -1}};

int bfs(string src, string end)
{
    int srcX = getX(src);
    int srcY = getY(src);
    int endX = getX(end);
    int endY = getY(end);

    queue<pair<int, int>> q;
    q.push({srcX, srcY});
    visited[srcX][srcY] = 1;
    while (!q.empty())
    {
        pair<int, int> p = q.front();
        q.pop();
        int x = p.first;
        int y = p.second;
        for (auto movement : movements)
        {
            int childX = movement.first + x;
            int childY = movement.second + y;
            if (!isvalid(childX, childY))
                continue;
            if (!visited[childX][childY])
            {
                q.push({childX, childY});
                visited[childX][childY] = 1;
                level[childX][childY] = level[x][y] + 1;
            }
        }
    }
    return level[endX][endY];
}

void reset()
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            level[i][j] = 0;
            visited[i][j] = 0;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        reset();
        string s1, s2;
        cin >> s1 >> s2;
        cout << bfs(s1, s2) << endl;
    }
    return 0;
}