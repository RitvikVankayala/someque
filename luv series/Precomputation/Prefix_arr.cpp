#include <bits/stdc++.h>
using namespace std;
const int MAX = 1e6;
int prefix_sum[MAX];

void prefix_sum_f(int *arr, int n)
{
    prefix_sum[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        prefix_sum[i] = prefix_sum[i - 1] + arr[i];
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
    prefix_sum_f(arr, n);
    int t;
    cin >> t;
    while (t--)
    {
        int L, R;
        cin >> L >> R;
        int ans = prefix_sum[R - 1] - prefix_sum[L - 1];
        ans += arr[L - 1];
        cout << "The value between is " << ans << endl;
    }
    return 0;
}