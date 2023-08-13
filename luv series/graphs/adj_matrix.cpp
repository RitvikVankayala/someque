#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
int graph[N][N];

int main()
{
    int N, M;
    cin >> N >> M;
    for (int i = 0; i < M; i++)
    {
        int v1, v2, wt;
        cin >> v1 >> v2 >> wt;
        // graph[v1][v2] = graph[v2][v1] = 1;
        graph[v1][v2] = graph[v2][v1] = wt;
    }

    // space complexity= O(N^2)
    return 0;
}