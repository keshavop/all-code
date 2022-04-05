// largest element in array

// Time  -> 0(n)
// Space -> 0(1)

#include <iostream>
using namespace std;

int largest(int arr[], int n) //time -> n
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[res])
        {
            res = i;
        }
    }
    return res;
}

int main()
{
    int n = 5;
    int arr[5] = {1, 8, 9, 7, 6};
    cout << largest(arr, n);
    return 0;
}