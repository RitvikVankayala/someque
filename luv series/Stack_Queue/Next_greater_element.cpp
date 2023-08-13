#include <bits/stdc++.h>
using namespace std;

vector<int> NGE(vector<int> v)
{
    vector<int> ans(v.size());
    stack<int> s;
    for (int i = 0; i < v.size(); i++)
    {
        while (!s.empty() && v[s.top()] < v[i])
        {
            ans[s.top()] = i;
            s.pop();
        }
        s.push(i);
    }
    while (!s.empty())
    {
        ans[s.top()] = -1;
        s.pop();
    }
    return ans;
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
    vector<int> ans = NGE(v);
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " -> " << (ans[i] == -1 ? -1 : v[ans[i]]) << endl;
    }
    return 0;
}