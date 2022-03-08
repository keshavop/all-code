/*
Reverse an array using recursion
Two Pointer Method

Time ->
Space ->

*/

#include <iostream>
using namespace std;

void reverse(int i, int arr[], int n)
{
    if (i >= n / 2)
    {
        return;
    }
    swap(arr[i], arr[n - i - 1]);
    reverse(i + 1, arr, n);
}

int main()
{
    int n = 10;
    int i = 0;
    int arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    reverse(i, arr, n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}