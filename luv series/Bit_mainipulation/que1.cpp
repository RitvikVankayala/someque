#include <bits/stdc++.h>
using namespace std;
int main()
{
    int c;
    cin >> c;
    int bit_cnt = (int)log2(c) + 1;
    int a = 0, b = 0;
    vector<int> set_bits;
    for (int i = 0; i < bit_cnt; i++)
    {
        if (c & (1 << i))
        {
            set_bits.push_back(i);
        }
        else
        {
            a |= (1 << i);
            b |= (1 << i);
        }
    }
    int size = 1 << set_bits.size();
    int ans = -1;
    for (int mask = 0; mask < size; mask++)
    {
        int a_cpy = a, b_cpy = b;
        for (int j = 0; j < set_bits.size(); j++)
        {
            if (mask & (1 << j))
            {
                a_cpy |= (1 << set_bits[j]);
            }
            else
            {
                b_cpy |= (1 << set_bits[j]);
            }
            ans = max(ans, a_cpy * 1ll * b_cpy);
        }
        cout << ans << endl;
    }
    return 0;
}