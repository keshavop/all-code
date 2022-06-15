// max subarray sum

// Time  -> 0(n)
// Space -> 0(1)

#include <iostream>
using namespace std;

int sum(int arr[], int n)
{
    int res = arr[0];
    int maxEnding = arr[0];
    for (int i = 0; i < n; i++)
    {
        maxEnding = max(maxEnding + arr[i], res);
        res = max(res, maxEnding);
    }

    return res;
}

int main()
{
    int arr[] = {1, -2, 3, -1, 2};
    int n = 5;
    cout << sum(arr, n);
    return 0;
}