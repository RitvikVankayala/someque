#include <bits/stdc++.h>
using namespace std;

void printVec(vector<pair<int, int>> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << " -> " << v[i].second << endl;
    }
    cout << endl;
}
int main()
{
    vector<pair<int, int>> v = {{1, 2}, {3, 4}, {5, 6}};
    printVec(v);
    int n;
    cin >> n;
    vector<pair<int, int>> v1;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v1.push_back(make_pair(x, y));
    }
    printVec(v1);
    return 0;
}