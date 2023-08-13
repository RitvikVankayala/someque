#include <bits/stdc++.h>
using namespace std;
const long long int M = 1e18 + 7;
int binMultifly(long long int a, long long int b)
{
    int ans = 0;
    while (b)
    {
        if (b & 1)
        {
            ans = (ans + a) % M;
        }
        a = (a + a) % M;
        b = b >> 1;
    }
    return ans;
}
int BinExpIter(long long int a, long long int b)
{
    // For large a <=10^18
    a = a % M;
    //--------------------
    int ans = 1;
    while (b)
    {
        if (b & 1)
        {
            ans = binMultifly(a, ans);
        }
        a = binMultifly(a, a);
        b = b >> 1;
    }
    return ans;
}

int main()
{
    // for large a and M values
    return 0;
}