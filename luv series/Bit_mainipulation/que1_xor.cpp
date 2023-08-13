// Find a single number that is present in odd count in a given array
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        ans = ans ^ arr[i];
    }
    cout << ans;
    return 0;
}