// max difference between max min eff
// arr[next] - arr[prev]

#include <iostream>
using namespace std;

int maxDiff(int arr[], int n)
{
    int res = arr[1] - arr[0];
    int min_value = arr[0];
    for (int i = 1; i < n; i++)
    {
        res = max(res, arr[i] - min_value);
        min_value = min(min_value, arr[i]);
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