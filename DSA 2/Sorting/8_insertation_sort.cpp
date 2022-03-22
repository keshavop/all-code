// Insertation sort
// find a smallest element compare it to all previous elements and shift all elements 1 place next and placed the smallest element in desired place.

// Time -> 0(n^2)
// Space - > 0(n)

#include <iostream>
using namespace std;

void InsertationSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int current = arr[i];

        int prev = i - 1;
        while (prev >= 0 && arr[prev] > current)
        {
            arr[prev + 1] = arr[prev];
            prev = prev - 1;
        }
        arr[prev + 1] = current;
    }
}

int main()
{
    int arr[] = {10, 20, 50, 60, 97, 69, 81};
    int n = sizeof(arr) / sizeof(arr[0]);

    InsertationSort(arr, n);

    cout << "After sorting" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}