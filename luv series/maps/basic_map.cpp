#include <bits/stdc++.h>
using namespace std;

void print(map<int, string> &m)
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
    map<int, string> m;
    m[1] = "abc";
    m[3] = "ghi";
    m[2] = "def";
    m.insert({6, "jkl"});
    auto it = m.find(2);
    if (it == m.end())
    {
        cout << "No Value" << endl;
    }
    else
    {
        cout << (*it).first << " -> " << (*it).second << endl;
    }
    print(m);
    cout << "--------------------------------" << endl;
    // map<int, string>::iterator iter;
    // for (iter = m.begin(); iter != m.end(); iter++)
    // {
    //     cout << iter->first << " -> " << iter->second << endl;
    // }

    m.erase(3);
    print(m);

    auto its = m.find(1);
    if (its != m.end())
    {
        m.erase(its);
    }

    print(m);

    m.clear();
    return 0;
}