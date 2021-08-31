#include <bits/stdc++.h>
using namespace std;

int printSubarray(int arr[], int n)
{
    int largest_Sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int current_Sum = 0;
            for (int k = i; k <= j; k++)
            {
                current_Sum += arr[k];
            }
            largest_Sum = max(largest_Sum, current_Sum);
        }
    }
    return largest_Sum;
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

    cout << printSubarray(arr, n);

    return 0;
}