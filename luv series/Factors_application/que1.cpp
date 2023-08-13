#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;
int hsh[N];
int multiples_cnt[N];
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        hsh[arr[i]]++;
    }
    for (int i = 1; i < N; i++)
    {
        for (int j = i; j < N; j += i)
        {
            if (hsh[j])
            {
                multiples_cnt[i] += hsh[j];
            }
        }
    }
    int t;
    cin >> t;
    while (t--)
    {
        int p, q;
        cin >> p >> q;
        long long lcm = p * 1ll * q / __gcd(p, q);
        long ans = multiples_cnt[p] + multiples_cnt[q];
        if (lcm < N)
        {
            ans -= multiples_cnt[lcm];
        }
        cout << ans << endl;
    }
    return 0;
}