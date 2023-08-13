#include <bits/stdc++.h>
using namespace std;
const int N = 2e6 + 10;
int a[N];
int hp[N];
int canRemove[N];
int hsh[N];
vector<int> distinctPf(int x)
{
    vector<int> ans;
    while (x > 1)
    {
        int pf = hp[x];
        while (x % pf == 0)
        {
            x /= pf;
        }
        ans.push_back(pf);
    }
    return ans;
}

int main()
{
    for (int i = 2; i < N; i++)
    {
        if (hp[i] == 0)
        {
            for (int j = i; j < N; j += i)
            {
                hp[j] = i;
            }
        }
    }
    int n, q;
    cin >> n >> q;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        hsh[a[i]] = 1;
    }
    for (int i = 2; i < N; i++)
    {
        if (hsh[i])
        {
            for (long long j = i; j < N; j *= i)
            {
                canRemove[j] = 1;
            }
        }
    }
    while (q--)
    {
        int x;
        cin >> x;
        vector<int> pfs = distinctPf(x);
        bool isPossible = false;
        for (int i = 0; i < pfs.size(); ++i)
        {
            for (int j = i; j < pfs.size(); ++j)
            {
                int product = pfs[i] * pfs[j];
                if (i == j && x % product != 0)
                    continue;
                int toRemove = x / product;
                if (canRemove[toRemove] == 1 || toRemove == 1)
                {
                    isPossible = true;
                    break;
                }
            }
            if (isPossible)
                break;
        }
        if (isPossible)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}