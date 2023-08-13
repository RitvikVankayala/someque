#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (b % a == 0)
    {
        return a;
    }
    return gcd(b % a, a);
}
int main()
{
    cout << gcd(12, 4) << endl;
    cout << gcd(12, 18) << endl;
    cout << gcd(18, 12) << endl;

    cout << __gcd(12, 18);

    return 0;
}