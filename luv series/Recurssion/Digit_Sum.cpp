#include <bits/stdc++.h>
using namespace std;
int digit_sum(int digit)
{
    if (digit == 0)
        return 0;
    else
        return digit % 10 + digit_sum(digit / 10);
}
int main()
{
    int digit;
    cin >> digit;
    int ans = digit_sum(digit);
    cout << ans;
    return 0;
}