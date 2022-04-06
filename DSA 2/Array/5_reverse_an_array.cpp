// reverse an aaray

// Time  -> 0(n)
// Space -> 0(1)

#include <iostream>
using namespace std;

void reverse(int arr[], int n)
{
    int low = 0;
    int high = n - 1;
    while (low < high)
    {
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    }
}

int main()
{
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};
    reverse(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}