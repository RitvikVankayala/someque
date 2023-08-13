#include <bits/stdc++.h>
using namespace std;

unordered_map<char, int> symbols = {{'[', -1}, {'(', -2}, {'{', -3}, {']', 1}, {')', 2}, {'}', 3}};
int main()
{
    stack<char> s;
    string str;
    cin >> str;
    for (char brackets : str)
    {
        if (symbols[brackets] < 0)
        {
            s.push(brackets);
        }
        else
        {
            if (s.empty())
            {
                cout << "NO" << endl;
                break;
            }
            char top = s.top();
            s.pop();
            if (symbols[brackets] + symbols[top] != 0)
            {
                cout << "NO" << endl;
                break;
            }
        }
    }
    if (s.empty())
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}