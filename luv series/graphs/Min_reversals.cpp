#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
const int INF = 1e9 + 10;
vector<pair<int, int>> graph[N];
vector<int> level(N, INF);
int n, m;
int bfs()
{
    deque<int> q;
    q.push_back(1);
    level[1] = 0;
    while (!q.empty())
    {
        int vertex = q.front();
        q.pop_front();
        for (auto child : graph[vertex])
        {
            int child_v = child.first;
            int wt = child.second;
            if (level[vertex] + wt < level[child_v])
            {
                level[child_v] = level[vertex] + wt;
                if (wt == 1)
                {
                    q.push_back(child_v);
                }
                else
                {
                    q.push_front(child_v);
                }
            }
        }
    }
    return level[n] == INF ? -1 : level[n];
}
int main()
{
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        if (v1 == v2)
            continue;
        graph[v1].push_back({v2, 0});
        graph[v2].push_back({v1, 1});
    }
    cout << bfs();
    return 0;
}