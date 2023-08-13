#include <bits/stdc++.h>
using namespace std;
void print(map<string, int> &m)
{
    cout << "*********************" << endl;
    cout << "Size of " << m.size() << endl;
    for (auto &it : m)
    {
        cout << it.first << " -> " << it.second << endl;
    }
}
int main()
{
    map<string, int> m;
    int N;
    cin >> N;
    while (N--)
    {
        string str;
        cin >> str;
        auto it = m.find(str);
        if (it == m.end())
        {
            m.insert({str, 1});
        }
        else
        {
            m[str]++;
        }
    }
    print(m);
    return 0;
}