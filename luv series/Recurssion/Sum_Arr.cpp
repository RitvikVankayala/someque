#include <bits/stdc++.h>
using namespace std;

int Sum(int n, int *arr)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return arr[n - 1] + Sum(n - 1, arr);
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int idx;
    cin >> idx;
    int ans = Sum(idx + 1, arr);
    cout << ans;
    return 0;
}