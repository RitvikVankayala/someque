#include <bits/stdc++.h>
using namespace std;
const double epsilon = 1e-5;

double nthmultiply(double mid, int powerth)
{
    double ans = 1;
    for (int i = 0; i < powerth; i++)
    {
        ans *= mid;
    }
    return ans;
}
double sqroot(double n)
{
    double low = 1;
    double high = n;
    while (high - low > epsilon)
    {
        double mid = (low + high) / 2;
        if ((mid * mid) < n)
        {
            low = mid;
        }
        else
        {
            high = mid;
        }
    }
    return high;
}
double nthroot(double n, int poweth)
{
    double low = 1;
    double high = n;
    while (high - low > epsilon)
    {
        double mid = (low + high) / 2;
        if (nthmultiply(mid, poweth) < n)
        {
            low = mid;
        }
        else
        {
            high = mid;
        }
    }
    return high;
}
int main()
{
    double n;
    cin >> n;
    double ans1 = sqroot(n);
    cout << ans1 << endl;
    double n1;
    cin >> n1;
    int x;
    cin >> x;
    double ans2 = nthroot(n1, x);
    cout << ans2 << endl;
    return 0;
}