// selection sort
//

// Time -> 0(n^2)
// Space - > 0(1)

#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
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