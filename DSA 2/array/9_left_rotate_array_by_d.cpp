// Left rotate array by d index
#include <iostream>
using namespace std;

void reverse(int arr[], int low, int high)
{
    while (low < high)
    {
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
}

int leftRotate(int arr[], int n, int d) // Time  ->  o(n)
{
    reverse(arr, 0, d - 1);
    reverse(arr, d, n - 1);
    reverse(arr, 0, n - 1);
}

int main()
{
    int n = 7, d = 3;
    int arr[7] = {10, 20, 20, 10, 30, 5, 8};

    leftRotate(arr, n, d);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}