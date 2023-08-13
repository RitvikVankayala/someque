#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
vector<int> graph[N];
int visited[N];
int level[N];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    visited[src] = 1;
    while (!q.empty())
    {
        int current_vertex = q.front();
        q.pop();
        cout << current_vertex << " ";
        for (auto child : graph[current_vertex])
        {
            if (!visited[child])
            {
                q.push(child);
                visited[child] = 1;
                level[child] = level[current_vertex] + 1;
            }
        }
    }
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n - 1; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    bfs(1);
    return 0;
}