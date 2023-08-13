#include <bits/stdc++.h>
using namespace std;

void printVec(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> vec;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vec.push_back(x);
    }
    printVec(vec);
    vec.pop_back();
    printVec(vec);
    vector<int> v1(5);
    vector<int> v2(5, 3);

    vector<int> v3 = vec;
    return 0;
}