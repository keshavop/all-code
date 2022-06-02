// largest subarray sum kadane's algorithm
// Time - 0(n)
// Space - 0(1)

#include <iostream>
using namespace std;

int largest_subarray_sum3(int arr[], int n)
{
    int cs = 0;
    int largest_sum = 0;
    for (int i = 0; i < n; i++)
    {
        cs = cs + arr[i];
        if (cs < 0)
        {
            cs = 0;
        }
        largest_sum = max(largest_sum, cs);
    }
    return largest_sum;
}

int main()
{
    int arr[] = {1, 2, 3, -2, 5};
    int n = sizeof(arr) / sizeof(int);
    cout << largest_subarray_sum3(arr, n);
    return 0;
}