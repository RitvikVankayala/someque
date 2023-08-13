#include <bits/stdc++.h>
using namespace std;
void print(multiset<string> &s)
{
    for (auto str : s)
    {
        cout << str << endl;
    }
}
int main()
{
    multiset<string> s;
    s.insert("abc");
    s.insert("def");
    s.insert("ghi");
    s.insert("abc");
    s.insert("def");

    auto it = s.find("abc");
    if (it != s.end())
    {
        s.erase(it); // deletes only one of all *it
    }
    s.erase("def"); // deletes all the def
    print(s);
    return 0;
}