#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long count = 0;
        multiset<long long> m;
        int n, k;
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            m.insert(x);
        }
        for (int i = 0; i < k; i++)
        {
            auto last_it = (--m.end());
            long long val = (*last_it);
            count += val;
            m.erase(last_it);
            m.insert(val / 2);
        }
        cout << count << endl;
    }
    return 0;
}