#include <iostream>
#include <algorithm>
using namespace std;

int moveZeros(int arr[], int n) //Time  ->  o(n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[count]);
            count++;
        }
    }
}

int main()
{
    int n = 5;
    int arr[5] = {10, 20, 0, 10, 0};

    moveZeros(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}