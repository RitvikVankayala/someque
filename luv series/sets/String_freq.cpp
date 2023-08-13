#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<string> set;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        set.insert(str);
    }
    for (auto str : set)
    {
        cout << str << endl;
    }
    return 0;
}