#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int maxEvenOdd(int arr[], int n)
{
    int res = 1;
    for (int i = 0; i < n; i++)
    {
        int current = 1;
        for (int j = i+1; j < n; j++)
        {
            if ((arr[j] % 2 == 0 && arr[j - 1] % 2 != 0) || (arr[j]%2 != 0 && arr[j-1] % 2 == 0))
            {
                current++;
            }
            else
            {
                break;
            }
        }
        res = max(res, current);
    }
    return res;
}

int main()
{
    int n = 6;
    int arr[] = {5, 10, 20, 6, 3, 8};
    cout << maxEvenOdd(arr, n);
    return 0;
}