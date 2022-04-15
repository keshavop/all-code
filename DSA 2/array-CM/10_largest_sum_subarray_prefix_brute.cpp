// largest sum subarray
// Time - 0(n^)
// Space - 0(1)

#include <iostream>
using namespace std;

int subarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = i; k < j; k++)
            {
                cout << arr[k] << ",";
            }
            cout << endl;
        }
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr)/sizeof(int);
    subarray(arr, n);
    return 0;
}