#include <bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
int binExp(int a, int b, int m)
{
    int ans = 1;
    while (b)
    {
        if (b & 1)
        {
            ans = (a * 1LL * ans) % M;
        }
        a = (a * 1LL * a) % M;
        b >>= 1;
    }
    return ans;
}
int main()
{
    // 50^64^32
    cout << binExp(50, binExp(64, 32, M - 1), M) << endl;
    return 0;
}