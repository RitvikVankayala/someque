#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long factorial = 1;
    int n;
    cin >> n;
    int m;
    cin >> m;
    for (int i = 2; i <= n; i++)
    {
        factorial = ((factorial * i) % m);
    }
    cout << "Factorial :" << factorial;
    return 0;
}