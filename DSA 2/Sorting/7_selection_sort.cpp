// selection sort
// find the smallest element and put in first place and proceed on
// we have half part array sorted and half array sorted
// Unstable sorting algorithm

// Time -> 0(n^2)
// Space - > 0(1)

#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_index])
            {
                swap(arr[min_index], arr[i]); // swapping smallest element
            }
        }
    }
}

int main()
{
    int arr[] = {10, 20, 50, 60, 97, 69, 81};
    int n = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, n);

    cout << "After sorting" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}