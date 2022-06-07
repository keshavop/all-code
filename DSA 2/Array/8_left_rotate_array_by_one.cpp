// Left rotate array by one

// Time  -> 0(n)
// Space -> 0(1)

#include <iostream>
using namespace std;

int leftRotate(int arr[], int n) // Time  ->  o(n)
{
    int temp = arr[0];
    for (int i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;
}

int main()
{
    int n = 5;
    int arr[5] = {10, 20, 20, 10, 30};

    leftRotate(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}