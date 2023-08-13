#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;

vector<int> graph[N];
bool visited[N];

void dfs(int vertex)
{
    cout << vertex << "--" << endl;
    visited[vertex] = true;
    // Action on vertex after entering the vertex
    for (int child : graph[vertex])
    {
        cout << "parent -> " << vertex << " child -> " << child << endl;
        // Action on child before entering the child node
        if (visited[child])
            continue;
        dfs(child);
        // Action on childd after exiting child node
    }
    // Action on vertex before exiting the vertex
}
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    dfs(1);

    return 0;
}