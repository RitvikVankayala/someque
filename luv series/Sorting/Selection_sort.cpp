#include <bits/stdc++.h>
using namespace std;
void selection_sort(int n, int *arr)
{
    int i = 0;
    int idx = 0;
    while (i < n)
    {
        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[idx])
            {
                idx = j;
            }
        }
        swap(arr[idx], arr[i]);
        i++;
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    selection_sort(n, arr);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}