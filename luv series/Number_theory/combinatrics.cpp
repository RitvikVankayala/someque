#include <bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
const int N = 1e6 + 10;
int Factorial[N];

int binExpIter(int a, int b, int M)
{
    int ans = 1;
    while (b)
    {
        if (b & 1)
        {
            ans = (ans * 1ll * a) % M;
        }
        a = (a * 1ll * a) % M;
        b >>= 1;
    }
    return ans;
}
int main()
{
    int n, k;
    cin >> n >> k;
    Factorial[0] = 1;
    for (int i = 1; i < N; i++)
    {
        Factorial[i] = (Factorial[i - 1] * 1ll * i) % M;
    }
    int ans = Factorial[n];
    int denom = (Factorial[n - k] * 1ll * Factorial[k]) % M;
    ans = (ans * 1ll * binExpIter(denom, M - 2, M)) % M;
    cout << ans << endl;
    return 0;
}