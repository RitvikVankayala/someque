#include <bits/stdc++.h>
using namespace std;

int SumOfKsubArray(int arr[], int n, int k)
{
    queue<int> qmin;
    queue<int> qmax;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        while (!qmin.empty() && qmin.front() == i - k)
        {
            qmin.pop();
        }
        while (!qmax.empty() && qmax.front() == i - k)
        {
            qmax.pop();
        }

        while (!qmax.empty() && arr[i] > arr[qmax.front()])
        {
            qmax.pop();
        }
        while (!qmin.empty() && arr[i] < arr[qmin.front()])
        {
            qmin.pop();
        }
        qmin.push(i);
        qmax.push(i);
        if (i >= k - 1)
        {
            sum += (arr[qmax.front()] + arr[qmin.front()]);
        }
    }
    return sum;
}

int main()
{
    int arr[] = {2, 5, -1, 7, -3, -1, -2};
    int N = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    cout << SumOfKsubArray(arr, N, k);
    return 0;
}