#include <bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
int binExpIter(int a, int b, int M)
{
    int ans = 1;
    while (b)
    {
        if (b & 1)
        {
            ans = (a * 1ll * ans) % M;
        }
        a = (a * 1ll * a) % M;
        b >>= 1;
    }
    return ans;
}
int main()
{
    int a;
    a = 2;
    cout << binExpIter(a, M - 2, M);

    return 0;
}