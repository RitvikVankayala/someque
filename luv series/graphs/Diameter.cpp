#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
vector<int> graph[N];
vector<int> depth;

void dfs(int vertex, int parent = -1)
{
    for (auto child : graph[vertex])
    {
        if (child == parent)
            continue;
        depth[child] = depth[vertex] + 1;
        dfs(child, vertex);
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
    int mx_depth = -1;
    int mx_node;
    for (int i = 1; i <= n; i++)
    {
        if (mx_depth < depth[i])
        {
            mx_depth = depth[i];
            mx_node = i;
        }
        depth[i] = 0;
    }

    dfs(mx_node);
    int mx_depth = -1;

    for (int i = 1; i <= n; i++)
    {
        if (mx_depth < depth[i])
        {
            mx_depth = depth[i];
        }
    }
    cout << "Diameter => ";
    return 0;
}