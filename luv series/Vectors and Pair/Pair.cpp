#include <bits/stdc++.h>
using namespace std;
int main()
{
    pair<int, string> p;
    p = make_pair(2, "abcd");
    cout << p.first << " " << p.second << endl;

    pair<int, string> q;
    q = {3, "this"};

    int a[] = {1, 2, 3};
    int b[] = {4, 5, 6};
    pair<int, int> p_array[3];
    for (int i = 0; i < 3; i++)
    {
        p_array[i] = {a[i], b[i]};
    }

    for (int i = 0; i < 3; i++)
    {
        cout << p_array[i].first << "--" << p_array[i].second << endl;
    }

    swap(p_array[0], p_array[1]);
    return 0;
}