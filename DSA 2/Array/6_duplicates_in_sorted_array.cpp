// duplicates in sorted array

// Time  -> 0(n)
// Space -> 0(1)

#include <iostream>
using namespace std;

int removeDuplicate(int arr[], int n) // Time  ->  o(n)
{
    int res = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[res - 1] != arr[i])
        {
            arr[res] = arr[i];
            res++;
        }
    }
    return res;
}

int main()
{
    int n = 6;
    int arr[6] = {10, 20, 40, 20, 10, 30};

    n = removeDuplicate(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}