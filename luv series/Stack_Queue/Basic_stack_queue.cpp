#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(4);
    s.push(7);

    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
    cout << "////////////////////////////////////" << endl;

    queue<string> q;
    q.push("abc");
    q.push("def");
    q.push("abcd");
    q.push("fabc");
    q.push("dabc");
    q.push("adddbc");

    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }

    return 0;
}