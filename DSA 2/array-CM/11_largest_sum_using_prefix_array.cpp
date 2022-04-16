// largest sum subarray
// Time - 0(n^2)
// Space - 0(n)

#include <iostream>
using namespace std;

int largest_subarray_sum2(int arr[], int n)
{
    // prefix sum
    int prefix[100] = {0};
    prefix[0] = arr[0];

    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    // largest sum
    int largest_sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int subarray_sum = i > 0 ? prefix[j] - prefix[i - 1] : prefix[j];

            largest_sum = max(largest_sum, subarray_sum);
        }
    }
    return largest_sum;
}

int main()
{
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr) / sizeof(int);
    cout << largest_subarray_sum2(arr, n);
    return 0;
}