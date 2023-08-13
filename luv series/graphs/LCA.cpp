#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
vector<int> graph[N];
vector<int> parents;
void dfs(int vertex, int parent = -1)
{
    parents[vertex] = parent;
    for (auto child : graph[vertex])
    {
        if (child == parent)
            continue;
        dfs(child, vertex);
    }
}

vector<int> path(int vertex)
{
    vector<int> ans;
    while (vertex != -1)
    {
        ans.push_back(vertex);
        vertex = parents[vertex];
    }
    reverse(ans.begin(), ans.end());
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
    int x, y;
    cin >> x >> y;
    vector<int> path_x = path(x);
    vector<int> path_y = path(y);
    int min_length = min(path_x.size(), path_y.size());
    int lca = -1;
    for (int i = 0; i < min_length; i++)
    {
        if (path_x[i] == path_y[i])
        {
            lca = path_x[i];
        }
        else
        {
            break;
        }
    }

    return 0;
}