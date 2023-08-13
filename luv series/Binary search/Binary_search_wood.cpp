#include <bits/stdc++.h>
using namespace std;
bool height_cal(int height, vector<int> &v, int amt)
{
    int sum = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] >= height)
        {
            sum += (v[i] - height);
        }
    }
    if (sum >= amt)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int min_height_wood(vector<int> &v, int amt)
{
    int low = 0;
    int high = 1e5;
    int mid;
    while (high - low > 1)
    {
        mid = (high + low) / 2;
        if (height_cal(mid, v, amt))
        {
            low = mid;
        }
        else
        {
            high = mid - 1;
        }
    }
    return high;
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
    int amt;
    cin >> amt;
    int min_amt = min_height_wood(v, amt);
    cout << min_amt << endl;
    return 0;
}