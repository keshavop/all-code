#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void rev(int arr[], int n)
{
    int low = 0, high = n - 1;
    while (low < high)
    {
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
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
    rev(arr, n);
    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << " ";
    }

    return 0;
}