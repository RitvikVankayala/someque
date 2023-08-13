#include <bits/stdc++.h>
using namespace std;
const int MAX = 1e7 + 2;
long long int precompute[MAX];

void prefixSum(int n)
{

    for (int i = 2; i <= n; i++)
    {
        precompute[i] += precompute[i - 1];
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    while (m--)
    {
        int l, r, k;
        cin >> l >> r >> k;
        precompute[l] = precompute[l] + k;
        precompute[r + 1] = precompute[r + 1] - k;
    }
    prefixSum(n);
    long long int maxi = -1;
    for (int i = 1; i <= n; i++)
    {
        maxi = max(maxi, precompute[i]);
    }
    cout << maxi;
    return 0;
}