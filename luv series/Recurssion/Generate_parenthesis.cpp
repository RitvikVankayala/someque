#include <bits/stdc++.h>
using namespace std;

vector<string> vecstr;
void generate(string &s, int open, int close)
{
    if (open > 0)
    {
        s.push_back('(');
        generate(s, open - 1, close);
        s.pop_back();
    }
    if (close > 0)
    {
        if (open < close)
        {
            s.push_back(')');
            generate(s, open, close - 1);
            s.pop_back();
        }
    }
    if (open == 0 && close == 0)
    {
        vecstr.push_back(s);
        return;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string str;
        generate(str, n, n);
        for (int i = 0; i < vecstr.size(); i++)
        {
            cout << vecstr[i] << endl;
        }
        cout << "*******************************" << endl;
    }

    return 0;
}