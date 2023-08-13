#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
vector<int> graph[N];
vector<vector<int>> connected_components;
bool visited[N];
vector<int> current_component;

void dfs(int vertex)
{
    current_component.push_back(vertex);

    visited[vertex] = true;
    for (auto child : graph[vertex])
    {
        if (visited[child])
            continue;
        dfs(child);
    }
}

int main()
{
    int v, e;
    cin >> v >> e;
    for (int i = 0; i < e; ++i)
    {
        int v1, v2;
        cin >> v1 >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    int count = 0;

    for (int i = 1; i <= v; i++)
    {
        if (visited[i] == 0)
        {
            current_component.clear();
            dfs(i);
            connected_components.push_back(current_component);
            count++;
        }
        else
        {
            continue;
        }
    }
    cout << connected_components.size() << endl;
    for (auto c : connected_components)
    {
        for (auto vertex : c)
        {
            cout << vertex << " ";
        }
        cout << endl;
    }
    return 0;
}