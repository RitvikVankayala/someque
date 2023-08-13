#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
vector<int> graph[N];
vector<int> subtree_sum;
void dfs(int vertex, int parent)
{
    subtree_sum[vertex] += vertex;
    for (auto child : graph[vertex])
    {
        if (child == parent)
            continue;
        dfs(child, vertex);
        subtree_sum[vertex] += subtree_sum[child];
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
    return 0;
}