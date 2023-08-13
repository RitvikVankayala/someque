#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
// vector<int> graph[N];
vector<pair<int, int>> graph[N];

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int v1, v2, wt;
        cin >> v1 >> v2 >> wt;
        // graph[v1].push_back(v2);
        // graph[v2].push_back(v1);

        graph[v1].push_back({v2, wt});
        graph[v2].push_back({v1, wt});
    }

    // space complexity =O(N+M)
    int i, j;
    cin >> i >> j;
    for (auto child : graph[i])
    {
        if (child.first == j)
        {
            cout << "Connected";
            cout << child.second;
        }
    }
    return 0;
}