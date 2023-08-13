#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<char> s;
    string str;
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {

        if (str[i] == '{' || str[i] == '(' || str[i] == '[')
        {
            s.push(str[i]);
        }
        else
        {
            if (str[i] == ')' || str[i] == ']' || str[i] == '}')
            {
                if ((str[i] == ')' && s.top() == '(') || (str[i] == '}' && s.top() == '{') || (str[i] == ']' && s.top() == '['))
                {
                    s.pop();
                }
            }
        }
    }
    if (s.empty())
    {
        cout << "Balenced" << endl;
    }
    else
    {
        cout << "Unbalenced" << endl;
    }
    return 0;
}