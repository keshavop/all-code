// max difference between max min naive
// arr[next] - arr[prev]

// Time  -> 0(n^2)
// Space -> 0(1)

#include <iostream>
using namespace std;

int maxDiff(int arr[], int n)
{
    int res = arr[1] - arr[0];
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            res = max(res, arr[j] - arr[i]);
        }
    }
    return res;
}

int main()
{
    int n = 7;
    int arr[7] = {2, 3, 10, 6, 4, 8, 1};
    // int arr[7] = {7, 10, 4, 10, 6, 5, 2};

    cout << maxDiff(arr, n);
    return 0;
}