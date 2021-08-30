#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void rotatebyone(int arr[], int n)
{
    int temp=arr[0];
    for (int i = 0; i < n; i++)
    {
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
    
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;
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
    printArray(arr,n);
    rotatebyone(arr, n);
    printArray(arr,n);
    return 0;
}