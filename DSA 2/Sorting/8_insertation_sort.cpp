// Insertation sort
//

// Time -> 
// Space - > 

#include <iostream>
using namespace std;

void Insertat

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