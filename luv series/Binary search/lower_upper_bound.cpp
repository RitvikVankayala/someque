#include <bits/stdc++.h>
using namespace std;
int lower_bound(vector<int> &v, int element)
{
    int low = 0;
    int high = v.size() - 1;
    while (high - low > 1)
    {
        int mid = (high + low) / 2;
        if (v[mid] >= element)
        {
            high = mid;
        }
        else
        {
            low = mid + 1;
        }
    }
    if (v[low] >= element)
    {
        return low;
    }
    if (v[high] >= element)
    {
        return high;
    }

    return -1;
}
int lower_bound(vector<int> &v, int element)
{
    int low = 0;
    int high = v.size() - 1;
    while (high - low > 1)
    {
        int mid = (high + low) / 2;
        if (v[mid] > element)
        {
            high = mid;
        }
        else
        {
            low = mid + 1;
        }
    }
    if (v[low] > element)
    {
        return low;
    }
    if (v[high] > element)
    {
        return high;
    }

    return -1;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int element;
    cin >> element;
    sort(v.begin(), v.end());
    int lwr_bnd = lower_bound(v, element);
    cout << lwr_bnd << " " << (lwr_bnd != -1 ? v[lwr_bnd] : -1)
         << endl;

    int upr_bnd = upper_bound(v, element);
    cout << upr_bnd << " " << (upper_bound != -1 ? v[upper_bound] : -1)
         << endl;

    return 0;
}