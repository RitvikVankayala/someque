#include <bits/stdc++.h>
using namespace std;
void printBinary(int a)
{
    for (int i = 10; i >= 0; --i)
    {
        cout << (1 & (a >> i));
    }
    cout << endl;
}
int main()
{
    // checking even or odd
    int num;
    cin >> num;
    if (num & 1)
    {
        cout << "Odd number" << endl;
    }
    else
    {
        cout << "Even number" << endl;
    }

    // Division by 2
    int div2 = (num >> 1);
    cout << div2 << endl;

    // Multiplication by 2
    int mul2 = (num << 1);
    cout << mul2 << endl;

    return 0;
}