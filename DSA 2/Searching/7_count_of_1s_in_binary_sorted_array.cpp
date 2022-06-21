// count of ones in a binary sorted array

// Time -> 0(Logn)
// Space -> 0(1)

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int countOnes(int arr[], int n)
{
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = low + (high-low) / 2;
        if (arr[mid] == 0)
        {
            low = mid + 1;
        }
        else
        {
            if (mid == 0 || arr[mid - 1] == 0)
            {
                return n - mid;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return 0;
}

int main()
{
    int n = 7;
    int arr[] = {0, 0, 1, 1, 1, 1, 1};
    cout<<countOnes(arr, n);
    return 0;
}