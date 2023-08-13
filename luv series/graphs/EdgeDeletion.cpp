#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
vector<int> graph[N];
int val[N];
vector<int> sum;

// considered 1 based indexing

void dfs(int vertex, int parent)
{
    sum[vertex] += val[vertex];
    for (auto child : graph[vertex])
    {
        if (child == parent)
            continue;
        dfs(child, vertex);
        sum[vertex] += sum[child];
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
    int ans = -1;
    for (int i = 2; i <= n; i++)
    {
        int s1 = sum[i];
        int s2 = sum[1] - s1;
        ans = max(ans, s1 * s2);
    }
    cout << ans;
    return 0;
}