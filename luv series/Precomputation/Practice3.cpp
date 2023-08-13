#include <bits/stdc++.h>
using namespace std;
const int MAX = 1e5 + 12;
int hashed[MAX][26];

void recompute()
{
    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            hashed[i][j] = 0;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        recompute();
        int n, q;
        cin >> n >> q;
        string str;
        cin >> str;
        for (int i = 0; i < n; i++)
        {
            hashed[i + 1][str[i] - 'a']++;
        }
        for (int i = 0; i < 26; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                hashed[j][i] += hashed[j - 1][i];
            }
        }
        while (q--)
        {
            int l, r;
            cin >> l >> r;
            int ODD_CNT = 0;
            for (int i = 0; i < 26; i++)
            {
                int CharCnt = hashed[r][i] - hashed[l - 1][i];
                if (CharCnt % 2 != 0)
                    ODD_CNT++;
            }
            if (ODD_CNT > 1)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
    }
    return 0;
}