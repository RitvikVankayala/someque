#include <bits/stdc++.h>
using namespace std;
const int N = 2e3 + 10;

int dp[1000];

int dp1[310][1000];

int func(int amount, vector<int> &coins)
{

    if (amount == 0)
    {
        return 0;
    }
    if (dp[amount] != -1)
        return dp[amount];
    int ans = INT32_MAX;
    for (int coin : coins)
    {
        if (amount - coin >= 0)
            ans = min(func(amount - coin, coins) + 1, ans);
    }
    return dp[amount] = ans;
}

int func1(int idx, int amount, vector<int> &coins)
{

    if (amount == 0)
    {
        return 1;
    }
    if (idx < 0)
        return 0;
    if (dp[idx][amount] != -1)
        return dp[idx][amount];
    int ways = 0;
    for (int coin_amount = 0; coin_amount <= amount; coin_amount += coins[idx])
    {
        ways += func1(idx - 1, amount - coin_amount, coins);
    }
    return dp[idx][amount] = ans;
}

int coinChange(vector<int> &coins, int amount)
{

    memset(dp, -1, sizeof(dp));
    int ans = func(coins.size() - 1, amount, coins);
    return ans == INT32_MAX ? -1 : ans;
}
int main()
{
    vector<int> coins = {1, 2, 5};
    cout << coinChange(coins, 11);
    return 0;
}