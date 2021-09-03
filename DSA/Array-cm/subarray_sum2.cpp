#include <bits/stdc++.h>
using namespace std;
int printSubarray(int arr[], int n)
{
    int prefix[100] = {0};
    prefix[0] = arr[0];

    for (int i = 1; i < n; i++)
    {
        prefix[i]=prefix[i-1]+arr[i];
    }
    
    int largest_Sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int current_Sum = i>0 ? prefix[j]-prefix[i-1]:prefix[j];
            
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