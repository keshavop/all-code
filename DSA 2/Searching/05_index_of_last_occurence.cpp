// index of last occurence in an array

// Time -> 0(Logn)
// Space -> 0(1)


#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int lastOccurenece(int arr[], int n, int x)
{
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] > x)
        {
            high = mid - 1;
        }
        else if (arr[mid] < x)
        {
            low = mid + 1;
        }
        else if (mid != n - 1 && arr[mid] != arr[mid + 1])
        {
            cout<<arr[mid]<<endl;
            return mid;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int n = 7;
    int x = 10;
    int arr[] = {5, 10, 10, 10, 10, 20, 20};
    cout<<lastOccurenece(arr, n, x);
    return 0;
}