#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = 0;
    int sum = 0;
    // for (int i = 1; i <= n; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         count++;
    //         sum = sum + i;
    //         cout << i << endl;
    //     }
    // }

    for (int i = 1; i * i <= (n); i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
            {
                cout << i << endl;
                count++;
                sum += i;
            }
            else
            {
                count += 2;
                sum += i;
                sum += (n / i);
                cout << i << endl;
                cout << (n / i) << endl;
            }
        }
    }
    return 0;
}