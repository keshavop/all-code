// array is sorted or not eff

// Time  -> 0(n)
// Space -> 0(1)

#include <iostream>
using namespace std;

bool isSorted(int arr[], int n)     //Time  -> o(n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};
    // int arr[5] = {1, 8, 9, 2, 15};

    printf("%s", isSorted(arr, n) ? "true" : "false");
    return 0;
}