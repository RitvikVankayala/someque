#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> masks(n, 0);
    for (int i = 0; i < n; i++)
    {
        int mask = 0;
        int num_days;
        cin >> num_days;
        for (int j = 0; j < num_days; j++)
        {
            int day;
            cin >> day;
            mask = (mask | (1 << day));
        }
        masks[i] = mask;
    }
    int max_days = 0;
    int p1 = -1;
    int p2 = -1;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int intersection = masks[i] & masks[j];
            int common_days = __builtin_popcount(intersection);
            if (common_days > max_days)
            {
                max_days = common_days;
                p1 = i;
                p2 = j;
            }
        }
    }
    cout << p1 << " " << p2 << " " << max_days << endl;
    return 0;
}