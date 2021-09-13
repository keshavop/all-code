#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int bubbleSort(int arr[], int n)
{
    for (int i =1; i <= n - 1; i++)
    {
        for (int j = 0; j <=(n - i - 1); j++)
        {
            if (arr[i] > arr[j + 1])
            {
                int temp = arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bubbleSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}