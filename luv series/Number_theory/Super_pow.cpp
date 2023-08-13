#include <bits/stdc++.h>
using namespace std;
int binExp(int a, int b, int m)
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
int superPow(int a, vector<int> &b)
{
    int ansMod = 0;
    for (auto val : b)
    {
        ansMod = (ansMod * 10 + val) % 1140;
    }
    return binExp(a, ansMod, 1337);
}
int main()
{

    return 0;
}