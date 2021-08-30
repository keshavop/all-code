#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void leftRotate(int arr[], int n, int d)
{
    reverse(arr, 0, d - 1);
    reverse(arr, d, n - 1);
    reverse(arr, 0, n - 1);
}

void reverse(int arr[], int low=0, int high=n-1)
{
    while (low < high)
    {
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
//    int n = sizeof(arr) / sizeof(arr[0]);
	int n=5;
    int d = 2;
    leftRotate(arr, n, d);
    printArray(arr, n);
    return 0;
}
