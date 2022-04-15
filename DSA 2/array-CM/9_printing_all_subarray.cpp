// printing all subarray
// Time - 0(n^3)
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
    int n = 5;
    int arr[] = {10, 20, 30, 40, 50};
    subarray(arr, n);
    return 0;
}