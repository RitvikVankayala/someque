#include <bits/stdc++.h>
using namespace std;

// bool should_i_swap(pair<int, int> a, pair<int, int> b)
// {
//     if (a.first != b.first)
//     {
//         if (a.first > b.first)
//             return false;
//         return true;
//     }
//     else
//     {
//         if (a.second < b.second)
//             return false;
//         return true;
//     }
// }

bool should_i_swap(pair<int, int> a, pair<int, int> b)
{
    if (a.first != b.first)
    {
        return a.first < b.first;
    }
    else
    {
        return a.second > b.second;
    }
}

bool swp(int a, int b)
{
    return a > b;
}
int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
    }
    sort(a.begin(), a.end(), should_i_swap);

    for (int i = 0; i < n; i++)
    {
        cout << a[i].first << " " << a[i].second << endl;
    }
    return 0;
}