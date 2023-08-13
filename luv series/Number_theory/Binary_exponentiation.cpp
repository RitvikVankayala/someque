#include <bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
int binExpRecur(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    int res = binExpRecur(a, b / 2);
    if (b & 1)
    {
        return (a * 1ll * ((res * res) % M)) % M;
    }
    else
    {
        return (res * 1ll * res) % M;
    }
}
int binExpIter(int a, int b)
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
    cout << binExpRecur(2, 18) << endl;
    cout << binExpIter(2, 18) << endl;

    return 0;
}