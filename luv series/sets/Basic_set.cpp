#include <bits/stdc++.h>
using namespace std;
void print(set<string> &s)
{
    for (auto str : s)
    {
        cout << str << endl;
    }
}
int main()
{
    // Similiar to the unorderde map the unordered set is implemented in O(1) time complexity using hash table and complex data struncture cannot be used as key, if the ordering doesnt matter in the que its better to used unordered rather than ordered
    set<string> s;
    s.insert("abc");
    s.insert("def");
    s.insert("ghi");
    auto it = s.find("abc");
    if (it != s.end())
    {
        s.erase(it);
    }
    s.erase("def");
    print(s);
    return 0;
}