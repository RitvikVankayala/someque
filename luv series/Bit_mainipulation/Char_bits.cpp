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
    for (char ch = 'A'; ch <= 'E'; ch++)
    {
        cout << ch << " -> ";
        printBinary(int(ch));
    }
    for (char ch = 'a'; ch <= 'e'; ch++)
    {
        cout << ch << " -> ";
        printBinary((int)ch);
    }

    // small char => 5th bit set
    // capitals char => 5th bit unset

    char A = 'A';
    char a = (A | (1 << 5));
    cout << a << endl;
    cout << (char)(A | ' ') << endl;

    char b = 'b';
    char B = (b & ~(1 << 5));
    cout << B << endl;
    cout << (char)(b & '_') << endl;

    return 0;
}