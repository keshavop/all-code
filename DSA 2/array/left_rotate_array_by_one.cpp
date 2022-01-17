#include <iostream>
#include <algorithm>
using namespace std;

int leftRotate(int arr[], int n)
{
    int temp=arr[0];
    for (int i = 1; i < n; i++)
    {
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
}

int print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n = 5;
    int arr[] = {2, 8, 9, 80, 10};
    leftRotate(arr, n);
    print(arr, n);
    return 0;
}