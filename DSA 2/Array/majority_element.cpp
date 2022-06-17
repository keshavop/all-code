#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int majority(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int count = 1;
        for (int j = 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
            if (count >= n / 2)
            {
                cout << "element is " << n << endl;
                return i;
            }
        }
    }
    return -1;
}

int main()
{
    int n = 6;
    int arr[] = {2,1,1,1,2,2};
    cout << majority(arr, n);
    return 0;
}