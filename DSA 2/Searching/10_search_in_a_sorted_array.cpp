#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int search(vector<int> arr, int x)
{
    int n = arr.size();
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == x)
        {
            return mid;
        }
        if (arr[low] < arr[mid]) // left half sorted
        {
            if (x >= arr[low] && x < arr[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        else // right half sorted
        {
            if (x > arr[mid] && x <= arr[high])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    vector<int> arr{100, 200, 300, 10, 20};
    int x = 10;
    cout << search(arr, x);
    return 0;
}