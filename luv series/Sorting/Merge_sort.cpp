#include <bits/stdc++.h>
using namespace std;
const int MAX = 1e5;
int arr[MAX];

void merge(int l, int r, int mid)
{
    int l_size = mid - l + 1;
    int r_size = r - mid;
    int left[l_size + 1];
    int right[r_size + 1];
    for (int i = 0; i < l_size; i++)
    {
        left[i] = arr[l + i];
    }
    for (int j = 0; j < r_size; j++)
    {
        right[j] = arr[mid + 1 + j];
    }
    left[l_size] = right[r_size] = INT_MAX;
    int l_i = 0, r_i = 0;
    for (int i = l; i <= r; i++)
    {
        if (left[l_i] < right[r_i])
        {
            arr[i] = left[l_i];
            l_i++;
        }
        else
        {
            arr[i] = right[r_i];
            r_i++;
        }
    }
}
void merge_sort(int l, int r)
{
    if (l == r)
    {
        return;
    }
    int mid = (l + r) / 2;
    merge_sort(l, mid);
    merge_sort(mid + 1, r);
    merge(l, r, mid);
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    merge_sort(0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}