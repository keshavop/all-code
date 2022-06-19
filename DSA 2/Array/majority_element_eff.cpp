// majority element in an array
// Boyer-Moore Voting Algorithm

// Time  -> 0(n)
// Space -> 0(1)

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int majority(int arr[], int n)
{
    int count = 0;
    int candidate = 0;

    // for (int num : arr)
    // {
    //     if (count == 0)
    //     {
    //         candidate = num;
    //     }
    //     if (num == candidate)
    //     {
    //         count += 1;
    //     }
    //     else
    //     {
    //         count -= 1;
    //     }
    //     return candidate;
    // }
    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        {
            candidate = arr[i];
        }
        if (arr[i] == candidate)
        {
            count += 1;
        }
        else
        {
            count -= 1;
        }
        return candidate;
    }
}

int main()
{
    int n = 7;
    int arr[] = {2, 1, 1, 1, 2, 2, 2};
    cout<<majority(arr, n);
    return 0;
}