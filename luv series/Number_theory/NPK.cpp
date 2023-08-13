#include <bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
const int N = 1e6 + 3;
int factorial[N];

int binExpIter(int a, int b, int M)
{
    int ans = 1;
    while (b)
    {
        if (b & 1)
        {
            ans = (ans * 1LL * a) % M;
        }
        a = (a * 1LL * a) % M;
        b >>= 1;
    }
    return ans;
}
int main()
{
    int n, k;
    cin >> n >> k;
    factorial[0] = 1;
    for (int i = 1; i < N; i++)
    {
        factorial[i] = (factorial[i - 1] * 1LL * i) % M;
    }

    int ans = factorial[n];
    int denom = factorial[n - k];
    ans = (ans * 1LL * binExpIter(denom, M - 2, M)) % M;
    cout << ans;
    return 0;
}