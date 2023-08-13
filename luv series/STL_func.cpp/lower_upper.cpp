#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    int *ptr = lower_bound(a, a + n, 6);
    if (ptr == (a + n))
    {
        cout << "Not found" << endl;
    }
    else
    {
        cout << (*ptr) << endl;
    }

    int *uptr = upper_bound(a, a + n, 5);
    if (uptr == (a + n))
    {
        cout << "Not found" << endl;
    }
    else
    {
        cout << (*uptr) << endl;
    }

    // in case of set instead of using lower_bound(a.begin(),a.end(),val) use set.lower_bound(val) if you use general one it will take O(n) time complexity instead of O(logn)
    return 0;
}