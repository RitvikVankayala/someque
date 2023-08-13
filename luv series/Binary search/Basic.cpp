#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int to_find;
    cin >> to_find;
    int low = 0;
    int high = n - 1;
    while (high - low > 1)
    {
        int mid = (high + low) / 2;
        if (v[mid] < to_find)
        {
            low = mid + 1;
        }
        else
        {
            high = mid;
        }
    }
    if (v[high] == to_find)
    {
        cout << "Element found at idx " << high << endl;
    }
    else if (v[low] == to_find)
    {
        cout << "Element found at idx " << low << endl;
    }
    else
    {
        cout << "Element not found " << endl;
    }
    return 0;
}