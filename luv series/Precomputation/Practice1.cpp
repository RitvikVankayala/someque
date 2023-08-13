#include <bits/stdc++.h>
using namespace std;
const int MAX = 1e6 + 3;
int fgcd[MAX];
int bgcd[MAX];
void precompute_fgcd(int n, int *arr)
{
    fgcd[1] = arr[1];
    for (int i = 2; i <= n; i++)
    {
        fgcd[i] = __gcd(fgcd[i - 1], arr[i]);
    }
}
void precompute_bgcd(int n, int *arr)
{
    bgcd[n] = arr[n];
    for (int i = n - 1; i >= 1; i--)
    {
        bgcd[i] = __gcd(bgcd[i + 1], arr[i]);
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        int arr[n + 4];
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        precompute_bgcd(n, arr);
        precompute_fgcd(n, arr);
        while (q--)
        {
            int l, r;
            cin >> l >> r;
            int l_side = fgcd[l - 1];
            int b_side = bgcd[r + 1];
            int ans = __gcd(l_side, b_side);
            cout << ans << endl;
        }
    }
    return 0;
}