#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    // Range based looping

    for (int value : v)
    {
        cout << value << " ";
    }
    cout << endl;
    for (auto value : v)
    {
        cout << value << " ";
    }
    return 0;
}