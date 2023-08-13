#include <bits/stdc++.h>
using namespace std;
const int MAX = 1e7 + 2;
int arr[MAX] = {0};

void precompute(int n, int *ip)
{
    for (int i = 0; i <= n; i++)
    {
        arr[ip[i]] += 1;
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    precompute(n, a);
    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        cout << "The count of the integer " << x << " is : " << arr[x] << endl;
    }
    return 0;
}