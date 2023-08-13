#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
const int INF = 1e9 + 10;
vector<pair<int, int>> graph[N];

void dijkstra(int src)
{
    vector<int> visited(N, 0);
    vector<int> dist(N, INF);
    set<pair<int, int>> st;
    st.insert({0, src});
    dist[src] = 0;
    while (st.size() > 0)
    {
        auto min_element = *st.begin();
        int min_wt = min_element.first;
        int vertex = min_element.second;
        st.erase(st.begin());
        if (visited[vertex])
            continue;
        visited[vertex] = 1;
        for (auto child : graph[vertex])
        {
            int child_v = child.first;
            int wt = child.second;
            if (dist[vertex] + wt < dist[child_v])
            {
                dist[child_v] = dist[vertex] + wt;
                st.insert({dist[child_v], child_v});
            }
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int v1, v2, wt;
        cin >> v1 >> v2 >> wt;
        graph[v1].push_back({v2, wt});
    }
    return 0;
}