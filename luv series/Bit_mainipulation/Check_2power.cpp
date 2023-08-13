#include <bits/stdc++.h>
using namespace std;
void printBinary(int num)
{
    for (int i = 10; i >= 0; i--)
    {
        cout << (1 & (num >> i));
    }
    cout << endl;
}
int main()
{
    int n;
    cin >> n;
    if (n & (n - 1))
    {
        cout << "Not a power of 2" << endl;
    }
    else
    {
        cout << "power of 2" << endl;
    }
    return 0;
}