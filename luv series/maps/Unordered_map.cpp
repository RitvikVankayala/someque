#include <bits/stdc++.h>
using namespace std;
int main()
{
    // difference between ordered and unordered is time complexity of all insertion deletion and other will be O(1) and ordering is not considered.Implementation is based on hash table. The keys cannot be complex data type in unordered but can be any in map.
    unordered_map<int, string> m;
    m[1] = "abc";
    m[5] = "def";
    m[3] = "acd";
    m[6] = "a";
    m[5] = "cde";

    for (auto it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << " -> " << it->second << endl;
        ;
    }
    return 0;
}