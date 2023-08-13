#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << [](int x)
    { return x + 2; }(5)
         << endl;

    cout << [](int x, int y)
    { return x + y; }(2, 3)
         << endl;

    auto ans = [](int x, int y)
    { return x * y; };
    cout << ans(4, 4) << endl;
}