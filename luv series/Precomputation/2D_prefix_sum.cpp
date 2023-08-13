#include <bits/stdc++.h>
using namespace std;
const int MAX = 1e3 + 4;
int arr[MAX][MAX];
long long prefix_sum[MAX][MAX];

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> arr[i][j];
            prefix_sum[i][j] = prefix_sum[i - 1][j] + prefix_sum[i][j - 1] - prefix_sum[i - 1][j - 1] + arr[i][j];
        }
    }
    int q;
    cin >> q;
    while (q--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int ans = prefix_sum[c][d] - prefix_sum[a - 1][d] - prefix_sum[c][b - 1] + prefix_sum[a - 1][b - 1];
        cout << ans << endl;
        // }
        return 0;
    }