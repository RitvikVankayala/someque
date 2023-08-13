#include <bits/stdc++.h>
using namespace std;
void printBinary(int num)
{
    for (int i = 10; i >= 0; i--)
    {
        cout << ((num >> i) & 1);
    }
    cout << endl;
}
int main()
{
    printBinary(32);
    int a = 9;
    // ith bit set or not
    printBinary(a);
    int i;
    cin >> i;
    if ((1 << i) & a)
    {
        cout << i << " th bit is set" << endl;
    }
    else
    {
        cout << i << " th bit is unset" << endl;
    }

    // setting a bit

    int b = (a | (1 << i));
    printBinary(b);

    // inversing entire bits
    printBinary(~a);

    // unset a bit
    int c = (a & ~(1 << i));
    printBinary(c);

    // toggle a bit
    int d = (a ^ (1 << i));
    printBinary(d);

    // count no.of set bits
    cout << "**********************" << endl;
    int count = 0;
    for (int j = 31; j >= 0; --j)
    {
        if (a & (1 << j))
        {
            count++;
        }
    }
    cout << count << endl;

    cout << __builtin_popcount(a);
    return 0;
}