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
    int num = 59;
    printBinary(59);
    // clear lsb
    int i;
    cin >> i;
    int temp = (1 << (i + 1)) - 1;
    temp = ~temp;
    int ans = (num & temp);
    printBinary(ans);

    // clear msb
    int j;
    cin >> j;
    int temp1 = (1 << (j + 1)) - 1;
    int ans1 = num & temp1;
    printBinary(ans1);
    return 0;
}