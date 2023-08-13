#include <bits/stdc++.h>
using namespace std;

const int M = 1e9 + 7;
const int MAX = 1e5 + 4;

long long int prefix[MAX];

long long int precompute(int n)
{
    prefix[0] = prefix[1] = 1;
    for (int i = 2; i < MAX; i++)
    {
        prefix[i] = prefix[i - 1] * i;
    }
    return prefix[n];
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long int ans = precompute(n);
        cout << "The factorial of the number is :" << ans << endl;
    }
    return 0;
}