#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
vector<int> arr(N);
int dp[N];
int func(int i)
{
    if (dp[i] != -1)
        return dp[i];
    int ans = 1;
    for (int j = 0; j < i; j++)
    {
        if (arr[i] > arr[j])
        {
            ans = max(ans, func(j) + 1);
        }
    }
    return dp[i] = ans;
}
int main()
{
    memset(dp, -1, sizeof(dp));
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int maxi = 0;
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, func(i));
    }
    cout << maxi;
    return 0;
}