#include <bits/stdc++.h>
using namespace std;
const int MAX = 1e9;
const int N = 1e5 + 10;
int n, c;
vector<int> v(N);
bool predicate(int min_distance)
{
    int lastPos = -1;
    int cows_cnt = c;
    for (int i = 0; i < n; i++)
    {
        if (v[i] - lastPos >= min_distance || lastPos == -1)
        {
            cows_cnt--;
            lastPos = v[i];
        }
        if (cows_cnt == 0)
        {
            break;
        }
    }
    return cows_cnt == 0;
}
int binary_search()
{
    int low = 0;
    int high = MAX;
    int mid;
    while (high - low > 1)
    {
        mid = (high + low) / 2;
        if (predicate(mid))
        {
            low = mid;
        }
        else
        {
            high = mid - 1;
        }
    }
    if (predicate(high))
    {
        return high;
    }
    else
    {
        return low;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> c;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.begin() + n);

        int ans = binary_search();
        cout << ans << endl;
    }
    return 0;
}