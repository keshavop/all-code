#include <bits/stdc++.h>
using namespace std;
int printSubarray(int arr[], int n)
{
    int largest_Sum = 0;
    int current_sum = 0;
    for (int i = 0; i < n; i++)
    {
        current_sum = current_sum + arr[i];
        if (current_sum < 0)
        {
            current_sum = 0;
        }
        largest_Sum = max(largest_Sum, current_sum);
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