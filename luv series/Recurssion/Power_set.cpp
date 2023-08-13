#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> v;
void generate(vector<int> &subset, int i, vector<int> &nums)
{
    if (i == nums.size())
    {
        v.push_back(subset);
        return;
    }
    generate(subset, i + 1, nums);

    subset.push_back(nums[i]);
    generate(subset, i + 1, nums);
    subset.pop_back();
}
int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    vector<int> subset;
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    generate(subset, 0, nums);

    for (auto subs : v)
    {
        for (auto ele : subs)
        {
            cout << ele << " ";
        }
        cout << endl;
    }
    return 0;
}