#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
vector<int> height;
vector<int> depth;
vector<int> graph[N];

void dfs(int vertex, int parent = 0)
{
    for (auto child : graph[vertex])
    {
        depth[child] = depth[vertex] + 1;
        if (child == parent)
            continue;
        dfs(child, vertex);
        height[vertex] = max(height[vertex], height[child] + 1);
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
    dfs(1);
    return 0;
}