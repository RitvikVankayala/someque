#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7};
    vector<int>::iterator it = v.begin();
    cout << (*(it + 1)) << endl;
    cout << "*" << endl;
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << endl;
    }

    vector<pair<int, int>> v_p = {{1, 2}, {3, 4}, {5, 6}};
    vector<pair<int, int>>::iterator iter;
    for (iter = v_p.begin(); iter != v_p.end(); iter++)
    {
        cout << (*iter).first << " -> " << iter->second << endl;
    }
    return 0;
}